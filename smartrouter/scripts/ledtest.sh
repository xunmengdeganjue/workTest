#! /bin/bash
echo 1 > /sys/devices/platform/leds-gpio/leds/ap148\:red\:status/brightness
sleep 1
echo 0 > /sys/devices/platform/leds-gpio/leds/ap148\:red\:status/brightness

