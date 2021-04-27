#include <stdio.h>
#include <string.h>
/* Jamie Lopez
 * CSC3320
 * Lab 10 - Part 2 */

int main()
{
    char smallest_word[20] = "z"; // Declare/Initialize smallest word variable
    char largest_word[20] = "";  // Declare/Initialize largest word variable
    char hold_word[20];         // Declare hold variable to compare with
    int status;                // Need a true condition to run while loop
    
    while(status = 1){       // Start while loop with true condition
    printf("Enter word: ");  // Prompt user to enter word
    scanf("%s", hold_word);  // Store user input in hold_word
           
	if(strcmp(smallest_word, hold_word) > 0){ //Compare hold to smallest
          strcpy(smallest_word, hold_word);  // If hold is smaller, copy it
          } else {                          // into smallest_word. Then, 
	  if(strcmp(largest_word, hold_word) < 0){// Compare hold to largest
              strcpy(largest_word, hold_word);	// If hold is larger, copy it
              }                                 // into largest_word
          }
       if(strlen(hold_word) == 4){    // Check length of word, if it's =4, 
            break;                   // end the program
         }             
     } 
    printf("Smallest word: %s\n", smallest_word);//Print output for smallest
    printf("Largest word: %s\n", largest_word); //Print output for largest
    return 0;               // End of program
}       
