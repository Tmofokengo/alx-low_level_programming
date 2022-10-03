#!/bin/bash
gcc -c *.c
ar -r liball.a *.o
ranlib liball.a
ar -t libmy.a
