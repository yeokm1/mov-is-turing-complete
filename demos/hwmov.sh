#!/bin/bash
set -x
movcc -g hw.c -o hw-mov.out && ./hw-mov.out
objdump -M intel -S -l hw-mov.out > hw-mov.asm