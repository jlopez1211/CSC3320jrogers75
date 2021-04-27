#include <stdio.h>
#include <string.h>
#define MAX 100

/* Jamie Lopez
 * CSC3320 
 * Lab 9 - Part 1 */

int main (void)
{
	FILE *fp;
	char temp;
	int i, j;
	int count = 0;
	int maxcount = 0;
	char maxchar;
	char user_temp[MAX];  // initialize array for input
	char user_input[MAX]; // Initialize array for input 

	fp = fopen("test.txt", "r");  // Open and read text file
	if(fp == NULL){                     //If txt file is empty, print
	    perror("Unable to open file!");  // this message
	    return(-1);
	}

	while(fgets(user_temp, MAX, fp)){ // Get each line of text file 
	strcat(user_input, user_temp);  // and concatenate them in one
	}                               // char array
		
	for(i=0; i < MAX; i++){     // iterate through the string
	    for(j=0; j < MAX; j++){  // iterate a second time to 
					         // compare chars
	    	
	        temp = tolower(user_input[i]);   //Change to all lowercase
	        if (temp != ' ' && temp != '\0' && temp == tolower(user_input[j])){
		    count++;      //change to lowercase and compare to first
		}                // iteration. Count multiple occurrences. 
	    
	    }
	   			
	    if (count > maxcount){ //if count is larger than maxcount, 
		maxcount = count;   // update max count with new count
		maxchar = temp;   // and update maxchar with character that
				 // that has the hight count. 	
	    }
	    
	    count = 0;     // reset count to zero
	    
  	}
	printf("The most frequent letter is '%c'. It appeared %d times.\n"
, maxchar, maxcount);    // output max count and max character for result.
	
	return 0;
	
}
