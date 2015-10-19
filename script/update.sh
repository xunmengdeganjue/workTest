#!/usr/bin/expect -f

set timeout 5

spawn git push

expect {
	"Username for 'https://github.com':"{send "xunmengdeganjue\r";exp_continue}
	"Password for 'https://xunmengdeganjue@github.com':"{send "1988216lsj"}

}
expect eof

exit

