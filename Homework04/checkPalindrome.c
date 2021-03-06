#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Jamie Lopez
 * CSC3320
 * Homework 4 - Part 2 #3 */

int verifyPalindrome(char*, int*);

int main(){
    char *msg;   //Declare pointer
    msg = (char*)malloc(4);  //Allocate memory
    int status;              // Declare variable
    status = 0;              // Initialize variable
    printf("Enter message: ");   // Prompt user to enter input
    scanf("%s", msg);         // Store input 
    
    checkPalindrome(msg, &status);  //Call verifyPassword and use pointer
     
    if(status == 1){       // Check status returned by function
        printf("This is a palindrome.\n");// Print output
     } else if(status == 2){   // Check status returned by function
        printf("This is not a palindrome.\n"); // Print output
           }
    free(msg);   // Free the memory allocated by malloc
    return 0;          // End of program
}

int checkPalindrome(char *msg, int *status){  //Function to verify palindrome
    int length, i, j;             //Declare length variable
    length = strlen(msg);  // Determine length of msg
       for(i = 0; i < length; i++){  //Increment msg from left to right
          for(j = length +1; j >= 0; j--){ //Decrement msg from right to left
            if(msg[i] != msg[j]){  // Compare the values found 
               *status = 2;   //Set status to 2 if the values are different
            } else {
               *status = 1;  // Set status to 1 if the values match            
            }
	}
      }
     return *status;    // Return status of message
    }    
