#!/bin/bash
# Jamie Lopez
# Midterm 1 Question 4
# This script runs the other scripts as required

echo " Phone Book Options: "
echo " 1 - Display Contact" 
echo " 2 - Add Contact"
echo " 3 - Delete Contact"
echo " 4 - Edit Contact"
echo " 5 - Exit "


echo "Select an option: "
read option

	case $option in
	1 ) 
	./viewcontact.sh
	./phonebookutility.sh
	;;

	2 )
	./addcontact.sh
	./phonebookutility.sh
	;;
	
	3 )
	./deletecontact.sh
	./phonebookutility.sh
	;;

	4 )
	./editcontact.sh
	./phonebookutility.sh
	;;

	5 )
	exit
	;;
	
	* )
	echo "Not a valid option"		
	./phonebookutility.sh
	;;
	
esac

	


