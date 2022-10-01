#!/bin/bash
gcc -wall -pedantic -werror -wextar -c *.c
ar rc liball.a *.o
