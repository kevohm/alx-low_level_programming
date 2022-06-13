#!/bin/bash
gcc *.c -c -fIPO
gcc *.o -shared -o liball.so
