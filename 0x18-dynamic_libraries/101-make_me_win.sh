#!/bin/bash
wget -P /tmp/ https://raw.github.com/jemmiesalami/alx-low_level_programming/master/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
