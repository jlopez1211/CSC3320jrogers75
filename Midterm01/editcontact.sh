#!/bin/bash
# Jamie Lopez
# Midterm1 Question4
# Create a phonebook utility
# This script allows a user to edit a contact

echo "Enter string to be updated: "
read oldstring
echo "Enter new string: "
read newstring

sed -i s/${oldstring}/${newstring}/g phone_database.txt
