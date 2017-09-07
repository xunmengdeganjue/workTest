#! /usr/bin/env perl
# Copyright 2015-2016 The OpenSSL Project Authors. All Rights Reserved.
#
# Licensed under the OpenSSL license (the "License").  You may not use
# this file except in compliance with the License.  You can obtain a copy
# in the file LICENSE in the source distribution or at
# https://www.openssl.org/source/license.html

use strict;
use OpenSSL::Test qw/:DEFAULT cmdstr srctop_file bldtop_dir/;
use OpenSSL::Test::Utils;
use TLSProxy::Proxy;

my $test_name = "test_sslextension";
setup($test_name);

plan skip_all => "TLSProxy isn't usable on $^O"
    if $^O =~ /^(VMS|MSWin32)$/;

plan skip_all => "$test_name needs the dynamic engine feature enabled"
    if disabled("engine") || disabled("dynamic-engine");

plan skip_all => "$test_name needs the sock feature enabled"
    if disabled("sock");

plan skip_all => "$test_name needs TLS enabled"
    if alldisabled(available_protocols("tls"));

use constant {
    UNSOLICITED_SERVER_NAME => 0,
    UNSOLICITED_SERVER_NAME_TLS13 => 1,
    UNSOLICITED_SCT => 2
};

my $testtype;

$ENV{OPENSSL_ia32cap} = '~0x200000200000000';
my $proxy = TLSProxy::Proxy->new(
    \&extension_filter,
    cmdstr(app(["openssl"]), display => 1),
    srctop_file("apps", "server.pem"),
    (!$ENV{HARNESS_ACTIVE} || $ENV{HARNESS_VERBOSE})
);

# Test 1: Sending a zero length extension block should pass
$proxy->start() or plan skip_all => "Unable to start up Proxy for tests";
plan tests => 6;
ok(TLSProxy::Message->success, "Zero extension length test");

sub extension_filter
{
    my $proxy = shift;

    if ($proxy->flight == 1) {
        # Change the ServerRandom so that the downgrade sentinel doesn't cause
        # the connection to fail
        my $message = ${$proxy->message_list}[1];
        $message->random("\0"x32);
        $message->repack();
        return;
    }

    # We're only interested in the initial ClientHello
    if ($proxy->flight != 0) {
        return;
    }

    foreach my $message (@{$proxy->message_list}) {
        if ($message->mt == TLSProxy::Message::MT_CLIENT_HELLO) {
            # Remove all extensions and set the extension len to zero
            $message->extension_data({});
            $message->extensions_len(0);
            # Extensions have been removed so make sure we don't try to use them
            $message->process_extensions();

            $message->repack();
        }
    }
}

# Test 2-3: Sending a duplicate extension should fail.
sub inject_duplicate_extension
{
  my ($proxy, $message_type) = @_;

    foreach my $message (@{$proxy->message_list}) {
        if ($message->mt == $message_type) {
          my %extensions = %{$message->extension_data};
            # Add a duplicate (unknown) extension.
            $message->set_extension(TLSProxy::Message::EXT_DUPLICATE_EXTENSION, "");
            $message->set_extension(TLSProxy::Message::EXT_DUPLICATE_EXTENSION, "");
            $message->repack();
        }
    }
}

sub inject_duplicate_extension_clienthello
{
    my $proxy = shift;

    # We're only interested in the initial ClientHello
    if ($proxy->flight != 0) {
        return;
    }

    inject_duplicate_extension($proxy, TLSProxy::Message::MT_CLIENT_HELLO);
}

sub inject_duplicate_extension_serverhello
{
    my $proxy = shift;

    # We're only interested in the initial ServerHello
    if ($proxy->flight != 1) {
        return;
    }

    inject_duplicate_extension($proxy, TLSProxy::Message::MT_SERVER_HELLO);
}

$proxy->clear();
$proxy->filter(\&inject_duplicate_extension_clienthello);
$proxy->start();
ok(TLSProxy::Message->fail(), "Duplicate ClientHello extension");

$proxy->clear();
$proxy->filter(\&inject_duplicate_extension_serverhello);
$proxy->start();
ok(TLSProxy::Message->fail(), "Duplicate ServerHello extension");

sub inject_unsolicited_extension
{
    my $proxy = shift;
    my $message;

    # We're only interested in the initial ServerHello/EncryptedExtensions
    if ($proxy->flight != 1) {
        return;
    }

    if ($testtype == UNSOLICITED_SERVER_NAME_TLS13) {
        $message = ${$proxy->message_list}[2];
        die "Expecting EE message ".($message->mt).", ".${$proxy->message_list}[1]->mt.", ".${$proxy->message_list}[3]->mt if $message->mt != TLSProxy::Message::MT_ENCRYPTED_EXTENSIONS;
    } else {
        $message = ${$proxy->message_list}[1];
    }

    my $ext = pack "C2",
        0x00, 0x00; #Extension length

    my $type;
    if ($testtype == UNSOLICITED_SERVER_NAME
            || $testtype == UNSOLICITED_SERVER_NAME_TLS13) {
        $type = TLSProxy::Message::EXT_SERVER_NAME;
    } elsif ($testtype == UNSOLICITED_SCT) {
        $type = TLSProxy::Message::EXT_SCT;
    }
    $message->set_extension($type, $ext);
    $message->repack();
}

SKIP: {
    skip "TLS <= 1.2 disabled", 2 if alldisabled(("tls1", "tls1_1", "tls1_2"));
    #Test 4: Inject an unsolicited extension (<= TLSv1.2)
    $proxy->clear();
    $proxy->filter(\&inject_unsolicited_extension);
    $testtype = UNSOLICITED_SERVER_NAME;
    $proxy->clientflags("-no_tls1_3 -noservername");
    $proxy->start();
    ok(TLSProxy::Message->fail(), "Unsolicited server name extension");

    #Test 5: Same as above for the SCT extension which has special handling
    $proxy->clear();
    $testtype = UNSOLICITED_SCT;
    $proxy->clientflags("-no_tls1_3");
    $proxy->start();
    ok(TLSProxy::Message->fail(), "Unsolicited sct extension");
}

SKIP: {
    skip "TLS 1.3 disabled", 1 if disabled("tls1_3");
    #Test 6: Inject an unsolicited extension (TLSv1.3)
    $proxy->clear();
    $proxy->filter(\&inject_unsolicited_extension);
    $testtype = UNSOLICITED_SERVER_NAME_TLS13;
    $proxy->clientflags("-noservername");
    $proxy->start();
    ok(TLSProxy::Message->fail(), "Unsolicited server name extension (TLSv1.3)");
}
