#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC *.c
gcc *.o -shared -o liball.so
