#!/bin/bash
set -x
gcc -g hw.c -o hw-gcc.out && ./hw-gcc.out
objdump -M intel -S -l hw-gcc.out > hw-gcc.asm