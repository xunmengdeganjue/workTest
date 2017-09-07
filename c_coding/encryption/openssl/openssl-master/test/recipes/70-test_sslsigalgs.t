#! /usr/bin/env perl
# Copyright 2016 The OpenSSL Project Authors. All Rights Reserved.
#
# Licensed under the OpenSSL license (the "License").  You may not use
# this file except in compliance with the License.  You can obtain a copy
# in the file LICENSE in the source distribution or at
# https://www.openssl.org/source/license.html

use strict;
use OpenSSL::Test qw/:DEFAULT cmdstr srctop_file bldtop_dir/;
use OpenSSL::Test::Utils;
use TLSProxy::Proxy;

my $test_name = "test_sslsigalgs";
setup($test_name);

plan skip_all => "TLSProxy isn't usable on $^O"
    if $^O =~ /^(VMS|MSWin32)$/;

plan skip_all => "$test_name needs the dynamic engine feature enabled"
    if disabled("engine") || disabled("dynamic-engine");

plan skip_all => "$test_name needs the sock feature enabled"
    if disabled("sock");

plan skip_all => "$test_name needs TLS1.2 or TLS1.3 enabled"
    if disabled("tls1_2") && disabled("tls1_3");

$ENV{OPENSSL_ia32cap} = '~0x200000200000000';
my $proxy = TLSProxy::Proxy->new(
    undef,
    cmdstr(app(["openssl"]), display => 1),
    srctop_file("apps", "server.pem"),
    (!$ENV{HARNESS_ACTIVE} || $ENV{HARNESS_VERBOSE})
);

use constant {
    NO_SIG_ALGS_EXT => 0,
    EMPTY_SIG_ALGS_EXT => 1,
    NO_KNOWN_SIG_ALGS => 2,
    NO_PSS_SIG_ALGS => 3,
    PSS_ONLY_SIG_ALGS => 4,
    PURE_SIGALGS => 5,
    COMPAT_SIGALGS => 6
};

#Note: Throughout this test we override the default ciphersuites where TLSv1.2
#      is expected to ensure that a ServerKeyExchange message is sent that uses
#      the sigalgs

#Test 1: Default sig algs should succeed
$proxy->start() or plan skip_all => "Unable to start up Proxy for tests";
plan tests => 18;
ok(TLSProxy::Message->success, "Default sigalgs");
my $testtype;

SKIP: {
    skip "TLSv1.3 disabled", 5 if disabled("tls1_3");

    $proxy->filter(\&sigalgs_filter);

    #Test 2: Sending no sig algs extension in TLSv1.3 should fail
    $proxy->clear();
    $testtype = NO_SIG_ALGS_EXT;
    $proxy->start();
    ok(TLSProxy::Message->fail, "No TLSv1.3 sigalgs");

    #Test 3: Sending an empty sig algs extension in TLSv1.3 should fail
    $proxy->clear();
    $testtype = EMPTY_SIG_ALGS_EXT;
    $proxy->start();
    ok(TLSProxy::Message->fail, "Empty TLSv1.3 sigalgs");

    #Test 4: Sending a list with no recognised sig algs in TLSv1.3 should fail
    $proxy->clear();
    $testtype = NO_KNOWN_SIG_ALGS;
    $proxy->start();
    ok(TLSProxy::Message->fail, "No known TLSv1.3 sigalgs");

    #Test 5: Sending a sig algs list without pss for an RSA cert in TLSv1.3
    #        should fail
    $proxy->clear();
    $testtype = NO_PSS_SIG_ALGS;
    $proxy->start();
    ok(TLSProxy::Message->fail, "No PSS TLSv1.3 sigalgs");

    #Test 6: Sending only TLSv1.3 PSS sig algs in TLSv1.3 should succeed
    #TODO(TLS1.3): Do we need to verify the cert to make sure its a PSS only
    #cert in this case?
    $proxy->clear();
    $testtype = PSS_ONLY_SIG_ALGS;
    $proxy->start();
    ok(TLSProxy::Message->success, "PSS only sigalgs in TLSv1.3");
}

SKIP: {
    skip "EC or TLSv1.3 disabled", 1
        if disabled("tls1_3") || disabled("ec");
    #Test 7: Sending a valid sig algs list but not including a sig type that
    #        matches the certificate should fail in TLSv1.3.
    $proxy->clear();
    $proxy->clientflags("-sigalgs ECDSA+SHA256");
    $proxy->filter(undef);
    $proxy->start();
    ok(TLSProxy::Message->fail, "No matching TLSv1.3 sigalgs");
}

SKIP: {
    skip "EC, TLSv1.3 or TLSv1.2 disabled", 1
        if disabled("tls1_2") || disabled("tls1_3") || disabled("ec");

    #Test 8: Sending a full list of TLSv1.3 sig algs but negotiating TLSv1.2
    #        should succeed
    $proxy->clear();
    $proxy->serverflags("-no_tls1_3");
    $proxy->ciphers("ECDHE-RSA-AES128-SHA:TLS13-AES-128-GCM-SHA256");
    $proxy->filter(undef);
    $proxy->start();
    ok(TLSProxy::Message->success, "TLSv1.3 client TLSv1.2 server");
}

SKIP: {
    skip "EC or TLSv1.2 disabled", 8 if disabled("tls1_2") || disabled("ec");

    $proxy->filter(\&sigalgs_filter);

    #Test 9: Sending no sig algs extension in TLSv1.2 should succeed
    $proxy->clear();
    $testtype = NO_SIG_ALGS_EXT;
    $proxy->clientflags("-no_tls1_3");
    $proxy->ciphers("ECDHE-RSA-AES128-SHA:TLS13-AES-128-GCM-SHA256");
    $proxy->start();
    ok(TLSProxy::Message->success, "No TLSv1.2 sigalgs");

    #Test 10: Sending an empty sig algs extension in TLSv1.2 should fail
    $proxy->clear();
    $testtype = EMPTY_SIG_ALGS_EXT;
    $proxy->clientflags("-no_tls1_3");
    $proxy->ciphers("ECDHE-RSA-AES128-SHA:TLS13-AES-128-GCM-SHA256");
    $proxy->start();
    ok(TLSProxy::Message->fail, "Empty TLSv1.2 sigalgs");

    #Test 11: Sending a list with no recognised sig algs in TLSv1.2 should fail
    $proxy->clear();
    $testtype = NO_KNOWN_SIG_ALGS;
    $proxy->clientflags("-no_tls1_3");
    $proxy->ciphers("ECDHE-RSA-AES128-SHA:TLS13-AES-128-GCM-SHA256");
    $proxy->start();
    ok(TLSProxy::Message->fail, "No known TLSv1.3 sigalgs");

    #Test 12: Sending a sig algs list without pss for an RSA cert in TLSv1.2
    #         should succeed
    $proxy->clear();
    $testtype = NO_PSS_SIG_ALGS;
    $proxy->clientflags("-no_tls1_3");
    $proxy->ciphers("ECDHE-RSA-AES128-SHA:TLS13-AES-128-GCM-SHA256");
    $proxy->start();
    ok(TLSProxy::Message->success, "No PSS TLSv1.2 sigalgs");

    #Test 13: Sending only TLSv1.3 PSS sig algs in TLSv1.2 should succeed
    $proxy->clear();
    $testtype = PSS_ONLY_SIG_ALGS;
    $proxy->serverflags("-no_tls1_3");
    $proxy->ciphers("ECDHE-RSA-AES128-SHA:TLS13-AES-128-GCM-SHA256");
    $proxy->start();
    ok(TLSProxy::Message->success, "PSS only sigalgs in TLSv1.2");

    #Test 14: Responding with a sig alg we did not send in TLSv1.2 should fail
    #         We send rsa_pkcs1_sha256 and respond with rsa_pss_sha256
    #         TODO(TLS1.3): Add a similar test to the TLSv1.3 section above
    #         when we have an API capable of configuring the TLSv1.3 sig algs
    $proxy->clear();
    $testtype = PSS_ONLY_SIG_ALGS;
    $proxy->clientflags("-no_tls1_3 -sigalgs RSA+SHA256");
    $proxy->ciphers("ECDHE-RSA-AES128-SHA:TLS13-AES-128-GCM-SHA256");
    $proxy->start();
    ok(TLSProxy::Message->fail, "Sigalg we did not send in TLSv1.2");

    #Test 15: Sending a valid sig algs list but not including a sig type that
    #         matches the certificate should fail in TLSv1.2
    $proxy->clear();
    $proxy->clientflags("-no_tls1_3 -sigalgs ECDSA+SHA256");
    $proxy->ciphers("ECDHE-RSA-AES128-SHA:TLS13-AES-128-GCM-SHA256");
    $proxy->filter(undef);
    $proxy->start();
    ok(TLSProxy::Message->fail, "No matching TLSv1.2 sigalgs");
    $proxy->filter(\&sigalgs_filter);

    #Test 16: No sig algs extension, ECDSA cert, TLSv1.2 should succeed
    $proxy->clear();
    $testtype = NO_SIG_ALGS_EXT;
    $proxy->clientflags("-no_tls1_3");
    $proxy->serverflags("-cert " . srctop_file("test", "certs",
                                               "server-ecdsa-cert.pem") .
                        " -key " . srctop_file("test", "certs",
                                               "server-ecdsa-key.pem")),
    $proxy->ciphers("ECDHE-ECDSA-AES128-SHA:TLS13-AES-128-GCM-SHA256");
    $proxy->start();
    ok(TLSProxy::Message->success, "No TLSv1.2 sigalgs, ECDSA");
}

my ($dsa_status, $sha1_status, $sha224_status);
SKIP: {
    skip "TLSv1.3 disabled", 2 if disabled("tls1_3") || disabled("dsa");
    #Test 17: signature_algorithms with 1.3-only ClientHello
    $testtype = PURE_SIGALGS;
    $dsa_status = $sha1_status = $sha224_status = 0;
    $proxy->clear();
    $proxy->clientflags("-tls1_3");
    $proxy->filter(\&modify_sigalgs_filter);
    $proxy->start();
    ok($dsa_status && $sha1_status && $sha224_status,
       "DSA/SHA2 sigalg sent for 1.3-only ClientHello");

    #Test 18: signature_algorithms with backwards compatible ClientHello
    $testtype = COMPAT_SIGALGS;
    $dsa_status = $sha1_status = $sha224_status = 0;
    $proxy->clear();
    $proxy->filter(\&modify_sigalgs_filter);
    $proxy->start();
    ok($dsa_status && $sha1_status && $sha224_status,
       "DSA sigalg not sent for compat ClientHello");
}



sub sigalgs_filter
{
    my $proxy = shift;

    # We're only interested in the initial ClientHello
    if ($proxy->flight != 0) {
        return;
    }

    foreach my $message (@{$proxy->message_list}) {
        if ($message->mt == TLSProxy::Message::MT_CLIENT_HELLO) {
            if ($testtype == NO_SIG_ALGS_EXT) {
                $message->delete_extension(TLSProxy::Message::EXT_SIG_ALGS);
            } else {
                my $sigalg;
                if ($testtype == EMPTY_SIG_ALGS_EXT) {
                    $sigalg = pack "C2", 0x00, 0x00;
                } elsif ($testtype == NO_KNOWN_SIG_ALGS) {
                    $sigalg = pack "C4", 0x00, 0x02, 0xff, 0xff;
                } elsif ($testtype == NO_PSS_SIG_ALGS) {
                    #No PSS sig algs - just send rsa_pkcs1_sha256
                    $sigalg = pack "C4", 0x00, 0x02, 0x04, 0x01;
                } else {
                    #PSS sig algs only - just send rsa_pss_sha256
                    $sigalg = pack "C4", 0x00, 0x02, 0x08, 0x04;
                }
                $message->set_extension(TLSProxy::Message::EXT_SIG_ALGS, $sigalg);
            }

            $message->repack();
        }
    }
}

sub modify_sigalgs_filter
{
    my $proxy = shift;

    # We're only interested in the initial ClientHello
    return if ($proxy->flight != 0);

    foreach my $message (@{$proxy->message_list}) {
        my $ext;
        my @algs;

        if ($message->mt == TLSProxy::Message::MT_CLIENT_HELLO) {
            if ($testtype == PURE_SIGALGS) {
                my $ok = 1;
                $ext = $message->extension_data->{TLSProxy::Message::EXT_SIG_ALGS};
                @algs = unpack('S>*', $ext);
                # unpack will unpack the length as well
                shift @algs;
                foreach (@algs) {
                    if ($_ == TLSProxy::Message::SIG_ALG_DSA_SHA256
                        || $_ == TLSProxy::Message::SIG_ALG_DSA_SHA384
                        || $_ == TLSProxy::Message::SIG_ALG_DSA_SHA512
                        || $_ == TLSProxy::Message::OSSL_SIG_ALG_DSA_SHA224
                        || $_ == TLSProxy::Message::SIG_ALG_RSA_PKCS1_SHA1
                        || $_ == TLSProxy::Message::SIG_ALG_DSA_SHA1
                        || $_ == TLSProxy::Message::SIG_ALG_ECDSA_SHA1) {
                        $ok = 0;
                    }
                }
                $sha1_status = $dsa_status = $sha224_status = 1 if ($ok);
            } elsif ($testtype == COMPAT_SIGALGS) {
                $ext = $message->extension_data->{TLSProxy::Message::EXT_SIG_ALGS};
                @algs = unpack('S>*', $ext);
                # unpack will unpack the length as well
                shift @algs;
                foreach (@algs) {
                    if ($_ == TLSProxy::Message::SIG_ALG_DSA_SHA256
                        || $_ == TLSProxy::Message::SIG_ALG_DSA_SHA384
                        || $_ == TLSProxy::Message::SIG_ALG_DSA_SHA512) {
                        $dsa_status = 1;
                    }
                    if ($_ == TLSProxy::Message::SIG_ALG_RSA_PKCS1_SHA1
                        || $_ == TLSProxy::Message::SIG_ALG_DSA_SHA1
                        || $_ == TLSProxy::Message::SIG_ALG_ECDSA_SHA1) {
                        $sha1_status = 1;
                    }
                    if ($_ == TLSProxy::Message::OSSL_SIG_ALG_RSA_PKCS1_SHA224
                        || $_ == TLSProxy::Message::OSSL_SIG_ALG_DSA_SHA224
                        || $_ == TLSProxy::Message::OSSL_SIG_ALG_ECDSA_SHA224) {
                        $sha224_status = 1;
                    }
                }
            }
        }
    }
}
