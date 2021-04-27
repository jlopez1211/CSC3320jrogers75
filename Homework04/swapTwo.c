#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Jamie Lopez
 * CSC3320
 * Homework 4 - Part 2 #4 */

char swapTwo(char*, char*);

int main(){
    char *sent1;   //Declare pointers
    char *sent2;
    sent1 = (char*)malloc(4);  //Allocate memory
    sent2 = (char*)malloc(4); //Allocate memory
    printf("Enter message 1: ");   // Prompt user to enter input 1
    scanf("%s", sent1);         // Store 1st sentence
    printf("Enter message 2: ");  //Prompt user to enter input 2 
    scanf("%s", sent2);    //Store 2nd sentence
    
    swapTwo(sent1, sent2);  //Call swapTwo and use pointer     
           
    free(sent1);   // Free the memory allocated by malloc
    free(sent2);  // Free the memory allocated by malloc
    return 0;          // End of program
}

char swapTwo(char *sent1, char *sent2){  //Function to swap 
    int n1, n2, i, j;             //Declare length variable
    n1 = strlen(sent1);  // Determine length of sent1
    n2 = strlen(sent2); // Determine length of sent2
      if(n1 != n2){    // Verify the two inputs are same length
         printf("The messages must be the same length. Please try again.\n");
           free(sent1); // Free memory allocated by malloc
           free(sent2); // Free memory allocated by malloc
       return 0;      // End program (if lengths are different)
        }    
	for(i = 0; i < n1; i++){  //Increment sent1&2 from left to right
         if((sent1[i]>='A'&&sent1[i]<='z')&&(sent2[i]>='A'&&sent2[i]<='z')){
	        sent1[i] = ' '; // If sent1 and sent2 values with same index
		sent2[i] = ' '; // are both alpha, replace with blank space
	    }
	 if((sent1[i]>='0'&&sent1[i]<='9')&&(sent2[i]>='0'&&sent2[i]<='9')){
                sent1[i] = ' '; // If sent1 and sent2 values with same index
		sent2[i] = ' '; // are both numbers, replace with blank space
	    }
    /*If sent1 is alpha and sent2 is numeric(or vice versa) in same index, 
 *    go through the swap sequence to exchange the values. */
         if(((sent1[i]>='A'&&sent1[i]<='z')&&(sent2[i]>='0'&&sent2[i]<='9'))||((sent1[i]>='0'&&sent1[i]<='9')&&(sent2[i]>='A'&&sent2[i]<='z'))){ 
             
      //************  SWAP SEQUENCE ***************
      //*****      example of this works       ****
      //begin with a=10, and b=3;
      //a = a-b  so a = 10-3 which means a is now 7
      //b = a+b  so b = 7+3 which means b is now 10 (a was 10 originally!)
      //a = b-a  so a = 10-7 which means a is now 3 (b was 3 originally!)
      // Now this process is done for the two strings so think
      // of sent1 as a and sent2 as b:
	    sent1[i] = sent1[i] - sent2[i];  
	    sent2[i] = sent1[i] + sent2[i];
	    sent1[i] = sent2[i] - sent1[i];            
            }
       } 

     // Display results of the swap: 	     
    printf("AFTER SWAP: \n");
    printf("Sentence 1: %s\n",sent1);
    printf("Sentence 2: %s\n",sent2);     
}    
