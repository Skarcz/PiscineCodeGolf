#!/bin/sh
set -e

cc -Wall -Wextra -Werror solution.c main.c -o test
./test > test_output.txt
diff -u reverse_number.txt test_output.txt
