#!/bin/bash
# Jamie Lopez
# Midterm 1 Question 4
# Create a phonebook utility
# This script allows a user to delete a contact

echo " Enter Contact First Name: "
read firstname
echo "Enter Contact Last Name: "
read lastname

sed -i /$firstname';'$lastname/d phone_database.txt

