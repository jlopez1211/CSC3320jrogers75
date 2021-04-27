#include <stdio.h>
#include <stdlib.h>

/* Jamie Lopez
 * CSC3320
 * Midterm 2 - #3 */

void sort_numeric(char sortpref,float *p , int n); // Function declaration 

int main(){
    printf("Midterm2 - Problem 3 \n");
    char sortpref;   // Declare variable
    int n, i;           // Declare int variable  
    float *p;   //Declare pointer 
    
        printf("How many numbers will you enter?\n");// Prompt for size
    	scanf("%d", &n);
        float arr[n];   //Declare array to store numbers
    	p = (float*)malloc(n*sizeof(float)); //allocate memory
    	if(p == NULL){     //Check if memory was allocated
      	    printf("Memory allocation failed. \n");//output msg if not
      	    exit (1);  // End program
            }    

	for(i=0; i < n; i++){ // Iterate to enter all numbers
      	    printf("Enter number %d: ", i+1);  //Prompt user for numbers
            scanf(" %f", &arr[i]);     // Store input in arr[]
         }      
    printf("How do you want to sort the array?\n");  // Prompt user for input
    printf("Enter (A) or (a) for Ascending or (D) or (d) for Descending: \n");
    scanf(" %c", &sortpref);        // Store the input in sortpref 
    sort_numeric(sortpref,arr, n);  //Call sort_numeric 
    
    printf("\n"); 
    
    free(p);  //Free memory from malloc    
    
    return 0;                // End of Program    
}
       /* Function to sort numbers */
void sort_numeric(char sortpref, float *p, int n){      
    float temp;  //Declare temp to hold values while sorting
    int i, j;  // Declare the required variables
    temp = 0.00;    // Initialize required variables          
    
     // Ascending sorting if  A or a is selected by user:
    if(sortpref == 'A' || sortpref == 'a'){  // Check for A/a input
	for (i = 0; i < n; i++){   // For loop to iterate through array
            for(j = i +1; j < n; j++){  // For loop to iterate for compare
               if(*(p + j) < *(p + i)){ // If second elem is less than first
		temp = *(p + i);  // Copy larger value to temp
		*(p + i) = *(p + j);  //copy smaller value to smaller index
		*(p + j) = temp;  // copy larger value in temp to next index
		}
	    } 		
        }        //Print output of ascending sorted array:
    printf("The ascending sorted array result is: \n");
    for(i = 0; i < n; i++)   // For loop to iterate through each element
	printf("%.6f\n", *(p + i));  // Output value 
    }

    // Descending sorting if D or d is selected by user:
    else if(sortpref == 'D' || sortpref == 'd'){ // Check for D/d input
	for(i = 0; i < n; i++){  // For loop to iterate through array
	    for(j = i + 1; j < n; j++){ // Iterate next index to compare
                if(*(p + j) > *(p + i)){  // If second elem is larger
		 temp = *(p + j);   // Copy larger value to temp
		 *(p + j)  = *(p + i);  //Copy smaller value to second index
		 *(p + i) = temp;  // Copy larger temp value in first index
		}
	    }
	}   // Print output of descending sorted array: 
    printf("The descending sorted array result is: \n");
    for(i = 0; i < n; i++)    // For loop to iterate through elements
	printf("%.6f\n", *(p + i));  // Ouput value
    }
    else {    // Print message if invalid sort option entered
       printf("Please enter correct sort option. \n");
    }     
 }   
