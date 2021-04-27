#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 8 // row (# of words)

/* Jamie Lopez
 * CSC3320
 * Midterm 2 - #2 */

void sort_alphabetic(char sortpref, char *words[]); //Function declaration

int main(){
    
    char sortpref;   // Declare variable
            // Create array to store all the words
    char *words[N] = {"Systems", "Programming", "Deep", "Learning", "Internet", "Things", "Robotics", "Course"};    
      
    printf("How do you want to sort the array?\n");  // Prompt user for input
    printf("Enter (A) or (a) for Ascending or (D) or (d) for Descending: \n");
    scanf("%c", &sortpref);        // Store the sort choice in sortpref 
    sort_alphabetic(sortpref, words);  //Call sort_alphabetic 
    printf("\n");    
    return 0;                // End of Program
}
       /* Function to sort string array */
void sort_alphabetic(char sortpref, char *words[]){  //Define sort function    
    char *temp;  // Declare temp pointer to help swap values
    int i, j;  // Declare the required int variables                 
    if(sortpref == 'A' || sortpref == 'a'){   // Check which sort is selected
	for (i = 0; i < N; i++){     // Iterate through the rows
            for(j = i + 1; j < N; j++){  // Iterate through the next row
               if(strcasecmp(words[i], words[j])>0){  //Compare the words
		temp = words[i];    //If first word is larger, copy to temp    
		words[i] = words[j]; // Then copy second word to first word
		words[j] = temp;  //Copy first(larger) word to second word
		}
	    } 		
        }        
    printf("The ascending sorted array result is: \n"); //Display output
    for(i = 0; i < N; i++)     // Iterate through all the words (rows)
	printf("%s\n",words[i]);  // Print output
    }
    else if(sortpref == 'D' || sortpref == 'd'){// Check which sort selected
       for(i = 0; i < N ; i++){     // Iterate through the rows/words
          for(j = 0; j < N; j++){  //Iterate through the next row/words
             if(strcasecmp(words[i], words[j])>0){ //Compare words 
	      temp = words[j];   // Copy smaller word to temp
	      words[j] = words[i]; // Copy first word into next word
	      words[i] = temp;  // Copy smaller temp word to first word
	      }
	  }
       }
    printf("The descending sorted array result is: \n");// Display output
    for(i = 0; i < N ; i++)          // Iterate through the words/rows
	printf("%s\n", words[i]);   // Print output
    }
      else {    //If invalid sort entered, give error message:
           printf("Invalid sort preference. Please try again.\n");
      }
}       
