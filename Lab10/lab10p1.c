#include <stdio.h>

/* Jamie Lopez
 * CSC3320
 * Lab 10 */

char* strcpy(char* strDest, const char* strSrc){ // Given function call 
    int i;            // Initialize variable i to be used in for loop
    for(i = 0; strSrc[i] != '\0'; i++){ // Iterate through elements of src
      strDest[i] = strSrc[i];    // Copy elements from src to dest
      }
    strDest[i] = '\0';    // Add null character to end of string
    return strDest;    // Return new strDest value to dest
}

int main(){
    char src[40] = "Wheel Of Time"; // Declare & Initialize src string 
    char dest[40] =" by Robert Jordan";  // Declare dest string
       
          // Print output of src and dest values  
    printf("ORIGINAL SOURCE STRING \nSrc string: %s\n", src);
    printf("BEFORE COPY \nDest string: %s\n", dest);
    printf("AFTER COPY \nDest string: %s\n", strcpy(dest,src));
    return 0;   // Signals end of program
}
