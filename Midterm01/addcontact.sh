#!/bin/bash
# Jamie Lopez
# Midterm 1 Question 4
# Create phonebook utility
# This scripts allows user to add a contact to the phonebook

echo "Enter New Contact First Name: "
read firstname

echo "Enter New Contact Last Name: "
read lastname

echo "Enter New Contact Street Address: "
read street

echo "Enter New Contact City: "
read city

echo "Enter New Contact State: "
read state

echo "Enter New Contact Zip Code: "
read zipcode

echo "Enter New Contact Home Phone: "
read homephone

echo "Enter New Contact Cell Phone: "
read cellphone

echo "$firstname;$lastname;$street;$city;$state;$zipcode;$homephone;$cellphone">> phone_database.txt
 
