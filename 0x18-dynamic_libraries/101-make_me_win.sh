#!/bin/bash
gcc -shared -o opana.so -fPIC giga.c
export LD_PRELOAD=./opana.so:$LD_LIBRARY_PATH
