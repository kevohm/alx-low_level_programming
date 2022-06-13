#!/bin/bash
gcc *.c -c -fIPC
gcc *.o -shared -o liball.sio
