#!/bin/bash
# Jamie Lopez
# CSC3320 Midterm 1
# Question 3

echo Input number of days old files should be for compressing:
read N
find -type f -mtime $N -exec tar cvzf {}.tar.gz {} \; 
