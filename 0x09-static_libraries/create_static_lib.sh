#!/bin/bash
gcc -Wall -pedantic -Wextra -std=gnu89 -c *.c
ar -cr libmy.a *.o
rm *.o

