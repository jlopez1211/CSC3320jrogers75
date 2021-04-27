#include <stdio.h>
#include <string.h>

/*Jamie Lopez
 * CSC3320
 * Lab 7   */

int main(void)
{
   char phone[14];  /*Initialize phone # string  */
   
   
   printf("Enter phone number [(999)999-9999]: ");/*Prompt user for phone#*/
   scanf("%s", phone);   /*store phone number in variable phone */ 
   
   if (phone[0]=='(')    /*If char in index 0 is (,     */
	phone[0] = ' ';   /* change it to blank          */
   if (phone[4]==')')    /* if char in index 4 is ), */
        phone[4] = '-';    /* change it to a dash  */
   printf("You entered: %s\n",phone); /* Print message with new format*/ 

return 0;  /* end of program */
}
