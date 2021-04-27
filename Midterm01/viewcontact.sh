#!/bin/bash
# Jamie Lopez
# Midterm 1 - Question 4
# Script to Display/Read contact

echo "Enter search criteria: "
read search
echo "First Name;Last Name;Street;City;State;Zip Code;Home Phone;Cell Phone "
grep -i $search phone_database.txt | sort -t ';' -k2,2 -k1,1 
 
