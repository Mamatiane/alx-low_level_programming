#!/bin/bash
wget https://github.com/Mamatiane/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so -O /tmp/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
