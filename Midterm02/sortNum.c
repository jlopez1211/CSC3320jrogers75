#include <stdio.h>

/* Jamie Lopez
 * CSC3320
 * Midterm 2 - #1 */

void sort_numeric(char sortpref,float* p , int n); // call function 

int main(){
    char sortpref;   // Declare variable
    float *p;         // Declare pointer p
    int n;           // Declare int variable  
    n = 11;          // Initialize variable n
          // Declare and initialize array
    float arr[] = {10,0.25,-2342,12123,3.145435,6,6,5.999,-2,-5,-109.56};
    p = &arr[0];   // Set point to array  
    printf("How do you want to sort the array?\n");  // Prompt user for input
    printf("Enter (A) Ascending or (D) Descending: \n");//Choices for sort
    scanf("%c", &sortpref);        // Store the input in sortpref 
    sort_numeric(sortpref, p, n);  //Call sort_numeric 
    printf("\n"); 
    return 0;                // End of Program
}

       /* Function to sort numbers */
void sort_numeric(char sortpref, float *p, int size){      
    float temp;  //Declare temp to hold values while sorting
    int i, j;  // Declare the required variables
    temp = 0.00;    // Initialize required variables          
    
     // Ascending sorting if  A or a is selected by user:
    if(sortpref == 'A' || sortpref == 'a'){  // Check for A/a input
	for (i = 0; i < size; i++){   // For loop to iterate through array
            for(j = i +1; j < size; j++){  // For loop to iterate for compare
               if(*(p + j) < *(p + i)){ // If second elem is less than first
		temp = *(p + i);  // Copy larger value to temp
		*(p + i) = *(p + j);  //copy smaller value to smaller index
		*(p + j) = temp;  // copy larger value in temp to next index
		}
	    } 		
        }        //Print output of ascending sorted array:
    printf("The ascending sorted array result is: \n");
    for(i = 0; i < size; i++)   // For loop to iterate through each element
	printf("%.6f \n", *(p + i));  // Output value 
    }

    // Descending sorting if D or d is selected by user:
    if(sortpref == 'D' || sortpref == 'd'){ // Check for D/d input
	for(i = 0; i < size; i++){  // For loop to iterate through array
	    for(j = i + 1; j < size; j++){ // Iterate next index to compare
                if(*(p + j) > *(p + i)){  // If second elem is larger
		 temp = *(p + j);   // Copy larger value to temp
		 *(p + j)  = *(p + i);  //Copy smaller value to second index
		 *(p + i) = temp;  // Copy larger temp value in first index
		}
	    }
	}   // Print output of descending sorted array: 
    printf("The descending sorted array result is: \n");
    for(i = 0; i < size; i++)    // For loop to iterate through elements
	printf("%.6f \n", *(p + i));  // Ouput value
    }
}       
