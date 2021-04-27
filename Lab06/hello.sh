# /bin/bash
echo "Welcome to the Computer Science Society."
# Jamie Lopez 
# jrogers75@student.gsu.edu
date
echo "Number of directories in /home:"
find ~/* -maxdepth 0 -type d | wc -l
echo "PATH=" $PATH
echo "USER=" $USER
echo "SHELL=" $SHELL
echo "Disk Usage:"
df
echo "Please, could you loan me \$25.00?"
echo "if x=2, x*x=4, x/2=1"
echo "All sh files that start with c:"
find c*.sh
echo "Good bye  "  "Current Hour:"; date +%H
