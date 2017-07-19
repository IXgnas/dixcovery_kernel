#!/sbin/sh

exec 2>&1 > /dev/kmsg

fstrim -v /system
fstrim -v /cache

sync
