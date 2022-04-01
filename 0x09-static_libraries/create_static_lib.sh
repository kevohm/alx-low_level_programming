#!/bin/bash
gcc -Wall -pedantic -Werror -Werror -c *.c
ar -rc liball.a *.o
rm *.o
ranlib liball.a
