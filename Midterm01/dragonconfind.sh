#!/bin/bash
#  Jamie Lopez
#  Midterm 1 - Question 2
#  Shell script to find keyword

echo "Enter keyword to be counted:"
read word

count=$(grep -c "$word" myexamfile.txt)

echo "$word occurred $count times. "
