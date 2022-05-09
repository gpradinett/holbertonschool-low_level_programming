#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 .c
gcc.c -c -fPIC
gcc *.o -shared -o liball.so
