#!/bin/bash
# Jamie Lopez - Midterm Question1
# CSC3320 CRN 11173-004

echo "Type in a command:"

read command

case $command in 
	#case 1 - cat
	cat )
	 awk 'FNR>=5 && FNR<=78' mandatabase.txt
		;;

	#case 2 - ls
	ls )
	 awk 'FNR>=84 && FNR<=331' mandatabase.txt
		;;
	#case 3 - sort
	sort )
	awk 'FNR>=338 && FNR<=491' mandatabase.txt
		;;

	#case 4 - mkdir
	mkdir )
	awk 'FNR>=498 && FNR<=555' mandatabase.txt
		;;

	#case 5 - sed
	sed )
	awk 'FNR>=561 && FNR<=857' mandatabase.txt
		;;

	#case 6 - echo
	echo )
	awk 'FNR>=863 && FNR<=936' mandatabase.txt
		;;

	#case 7 - clear
	clear )
	awk 'FNR>=942 && FNR<=964' mandatabase.txt
		;;
	
	#case 8 - vi
	vi )
	awk 'FNR>=970 && FNR<=1402' mandatabase.txt
		;;

	#case 9 - wc
	wc )
	awk 'FNR>=1408 && FNR<=1468' mandatabase.txt
		;;

	#case 10 - mv
	mv )
	awk 'FNR>=1475 && FNR<=1574' mandatabase.txt
		;;
	
	#case 11 - invalid commands
	* )
	echo "Sorry, I cannot help you."
		;;
esac
