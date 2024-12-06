#!/bin/bash
gcc -c -Wall -Werror *.c -I./
gcc -shared *.o -o liball.so
