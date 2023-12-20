#!/bin/bash
gcc -shared -o wine.so -fPIC gmcrack.c
export LD_PRELOAD=./wine.so:$LD_LIBRARY_PATH
