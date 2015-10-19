#!/usr/bin/expect -f

set timeout 5

spawn git push

expect "Username for 'https://github.com':"
send "**your-account**\r"

expect "Password for 'https://your-account@github.com':"
send "**your-password**\r"


expect eof

exit

