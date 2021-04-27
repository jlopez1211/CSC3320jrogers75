#include <stdio.h>
#include <stdlib.h>
/* Jamie Lopez
 * Midterm  1 - Question 5B
 * Bit shifted and complement */

int main(void)
{
	int original = 1;
	int newvalue = 1;
	printf("Enter an integer: ");
	scanf("%d", &original);
	int orig_converted = int_to_int(original);
	printf("Original number %d converted to binary is %d\n", original, orig_converted);
	int shift = original;
 	newvalue = shift <<= 3; 
	int shiftbinary = int_to_int(newvalue); 
	printf("Shifted binary is %d\n", shiftbinary);
	
	int compleorig = ~original;
	
 	
	int complbin = int_to_int(compleorig);/*convert complement to binar*/
	
	int netbin = shiftbinary + compleorig;
	netbin = newvalue + compleorig;
	printf("Shifted Value + Complement Value =  %d\n",netbin);
return 0;
}		

	int int_to_int(x){
		if (x==0||x==1)
		 return x;		
		return int_to_int(x / 2) * 10 + x % 2;       
		}
