#include <stdio.h>
#include <string.h>

/*Jamie Lopez
 * CSC3320
 * Lab 7   */

int main(void)      /* Begin with main function*/
{
   int item, qty;  /* Declare integer variables to be used */
   double unit;    /* Declare double variable to be used */   
   char purdate[11];    /* Declar char string for purchase date w/ size  */
   
   printf("Enter item number: ");  /* Prompt user for item number */
   scanf("%d", &item);            /* Store item number in variable item */
   printf("Enter unit price: ");  /* Prompt user for unit price */
   scanf("%lf", &unit);          /* Store unit price in variable unit */
   printf("Enter quantity: ");   /* Prompt use for quantity */
   scanf("%d", &qty);           /* Store quantity in qty */
   printf("Enter purchase date (mm/dd/yyyy): "); /* Prompt for Purch Date */
   scanf("%s", &purdate);      /* Store date in purdate */
      

       /* Printer Header information first: */
   printf("Item\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");
      /* Print in format with tabs to maintain spacing */
   printf("%d\t$%-6.2lf\t\t%d\t%s\t$\t%6.2lf\n", item, unit, qty, purdate, unit * qty); 

   
return 0;   /* end of program */
}
