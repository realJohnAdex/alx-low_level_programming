#!/bin/bash
gcc -fPIC -c operations.c
gcc -shared -Wl,-soname,100-operations.so -o 100-operations.so operations.o
