#!/bin/bash
source_files=$(ls *.c)

gcc -c $source_files

ar rcs liball.a *.o
