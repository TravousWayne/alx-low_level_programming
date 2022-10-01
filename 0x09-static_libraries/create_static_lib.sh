#!/bin/bash
gcc -wall -pedantic -Werror -Wextar -c *.c
ar rc liball.a *.o
