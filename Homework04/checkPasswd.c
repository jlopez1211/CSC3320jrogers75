#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Jamie Lopez
 * CSC3320
 * Homework 4 - Part 1 */

int verifyPassword(char*, int*);

int main(){
    char *passwd;            // Declare pointer passwd
    passwd = (char*)malloc(4);  // Allocate memory for passwd
    int points;                // Declare variable points
    points = 0;               // Initialize points to 0
    printf("Enter password: ");  // Prompt user for input
    scanf("%s", passwd);        // Store the input in passwd 
    
    verifyPassword(passwd, &points);  //Call verifyPassword 
     
      /* Print output results of the password check */
    if(points > 30){            // Verify if deductions are more than 30
        printf("Total points deducted is %d.\n", points); // Print deductions
	printf("The password is unsafe! Please reset.\n"); // Print result
    } else {
	printf("The password is safe.\n");  // Print result if safe password
           }
    free(passwd);
    return 0;                // End of Program
}

       /* Function to verify safety of password entered */
int verifyPassword(char *passwd, int *points){      
    int i;          // Declare the required variables
    int lower, upper, missnum, countalpha, countnum, inarow;
    lower = 0;     // Initialize required variables
    upper = 0;    
    missnum = 0;     
    countalpha = 0;   
    countnum = 0;     
    inarow = 1;      
    char temp;      
    
    int length = strlen(passwd);    //Determine length of password 
      for (i = 0; i < length; i++){ // for loop to iterate through the chars
         temp = passwd[i];   // Assign each char to temp for review
          
       /********** Check if characters are upper case***************
        ********** 1 means uppercase char was found  ***************
        ******* if uppercase found earlier, leave upper =  1***/
	 if((temp >= 'A' && temp <= 'Z') || upper == 1){
             upper = 1;     // 1 indicates an uppercase was found
           }else{
              upper = 0;   // 0 indicates uppercase not found  
           } 
         
     /*********** Check if characters are lower case ************
      *********** 1 indicates a lowercase char was found ********
      ********** of lowercase found earlier, leave lower = 1 ****/
        
	if((temp >= 'a' && temp <='z') || lower == 1){
             lower = 1;   // 1 indicates a lowercse was found 
           } else {
              lower = 0;  // 0 indicates lowercase not found 
           }         
                     
     /*********** Check if characters are numbers 0-9 ***********
      *********1 indicate a number was found ********************/        
        if((temp >= '0' && temp <= '9') || missnum == 1){
              missnum = 1;   // 1 indicates a number was found
           } else {
              missnum = 0;   // 0 indicates a number was not found 
             }                            
     /****Check if there are more than 2 consecutive alpha or numeric***/
                      
                 if(temp >= 'A' && temp <= 'z'){//Check for alpha char
	             countalpha++; //If found, increment countalpha and
                     countnum = 0;  //reset countnum to 0
		     if(countalpha > 2){ // If countalpha is >2, consecutive
			inarow = 0; // chars found so set indicator to 0.
			}         
		 }else if(temp >= '0' && temp <= '9'){// Check for num chars
		     countnum++; //If found, increment countnum
		     countalpha = 0; // and reset countalpha to 0
                     if(countnum > 2){  //If more than 2 consec. nums found,
		 	inarow = 0;  // Set indicator to 0
			}
                 }    
         /* Calculate number of points to be deducted */
         *points =(4 - (upper + lower + missnum + inarow))*20;
       }
     return *points;  // Return total of points to main 
    } 
 //**************Function for Part 1 #1 (commented out to add #2************* 
/* int verifyPassword(char *passwd, int *points){  //Function to calculate pts
 *     int length;     // Declare length variable
 *     length = strlen(passwd); //Determine length of password
 *     if(length >= 10){   // Check if length is >= 10
 *         *points = 0;   // Point to be deducted is 0
 *         } else {
 *         *points = (10-length)*5;  //Calculate pts to be deducted
 *           }
 *         return *points;   // Return total points deducted to main
 *        }
 *                */
