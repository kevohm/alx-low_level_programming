#!/bin/bash
gcc -c -fIPC *.c
gcc *.c -shared -o liball.so
