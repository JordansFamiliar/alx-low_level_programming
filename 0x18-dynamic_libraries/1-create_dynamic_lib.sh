#!/bin/bash
gcc -c -fPIC *.c -o liball.o
gcc -shared -o liball.so liball.o
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
