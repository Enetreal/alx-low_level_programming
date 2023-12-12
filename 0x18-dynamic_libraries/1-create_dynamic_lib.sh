#!/bin/bash
GCC=gcc

OTHERS="-Wall -shared -fPIC"

FILES="0-isupper.c 1-memcpy.c 3-islower.c 4-strpbrk.c _putchar.c 0-memset.c 1-strncat.c 3-puts.c 5-strstr.c 0-strcat.c 2-strchr.c 3-strcmp.c 6-abs.c 100-atoi.c 2-strlen.c 3-strspn.c 9-strcpy.c 1-isdigit.c 2-strncpy.c 4-isalpha.c"

OUTPUT=liball.so

$GCC $OTHERS $FILES -o $OUTPUT
