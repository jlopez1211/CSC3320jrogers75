#include <stdio.h>
#include <stdlib.h>

#define MAX ((int) (sizeof(ctry_codes)/sizeof(ctry_codes[0])))

/* Jamie Lopez
 * CSC3320
 * Homework 4 - Part 3 #5 */

struct countryinfo{  // Create structure
    char *country;    // Store country and 
    int ccode;       // country code in the structure
};

const struct countryinfo ctry_codes[] = 
    {{"Argentina", 54}, {"Bangladesh", 880},{"United States", 1},{"Brazil",55},{"Burma (Myanmar)", 95},{"China", 86},{"Colombia", 57},{"Egypt", 20},{"Ethiopia", 251},{"France", 33},{"Germany", 49},{"India", 91},{"Indonesia", 62},{"Italy", 39},{"Japan", 81},{"Mexico", 52},{"South Korea", 82},{"Spain", 34},{"Turkey", 90},{"United Kingdom", 44},{"Vietnam", 84}};


int main(){
    int code, i;   //Declare variable       
    printf("Enter country code: ");  // Prompt user to enter code
    scanf("%d",&code);         // Store country code 
     for(i = 0; i < MAX; i++)  // Iterate through array to search for code
        if(code == ctry_codes[i].ccode){   // If entered code has a match,
          printf("Country Code %d =  %s\n",code, ctry_codes[i].country);
          return 0;                    // Print the output above
	} 
     printf("Country code not recognized.\n");//Print message if no matches    
    return 0;
}    
