#!/bin/bash
# Jamie Lopez
# CSC3320
# Midterm 1 - Question 5
# This script combines 5A and 5B

echo "Enter an integer: "
read num

#run 5A to calculate factorial
gcc -o factorialextra factorialextra.c
./factorialextra <<< $num


#run 5B to calculate complement + left shift value
gcc -o midterm5bextra midterm5bextra.c
./midterm5bextra <<< $num
