#! /bin/bash
sudo ./bridge_script.sh

sudo /etc/init.d/chilli start
sudo radiusd -Xx &





