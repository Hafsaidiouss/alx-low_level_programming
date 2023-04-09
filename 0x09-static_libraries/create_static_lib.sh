#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 $PWD/*.c
ar rc liball.a $PWD/*.o
