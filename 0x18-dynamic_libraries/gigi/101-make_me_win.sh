#!/bin/bash
gcc -shared -o win.so -fPIC gmcrack.c
export LD_PRELOAD=./win.so:$LD_LIBRARY_PATH
