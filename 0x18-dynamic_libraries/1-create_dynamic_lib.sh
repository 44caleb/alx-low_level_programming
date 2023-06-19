#!/bin/bash
gcc -fpic -c *.c -o library.o
gcc -shared library.o -o liball.so
