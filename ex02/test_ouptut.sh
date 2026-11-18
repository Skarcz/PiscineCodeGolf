#!/bin/sh
set -e

cc -Wall -Wextra -Werror solution.c main.c -o test
./test > test_output.txt
diff -u staircase.txt test_output.txt > diff_output.diff || true
