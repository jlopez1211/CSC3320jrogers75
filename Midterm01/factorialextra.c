#include <stdio.h>
/*  Jamie Lopez
 *  Midterm 1 - Question 5A
 *  Compute Factorial */

int main(void)
{
    int fact=1;
    int result=1;
    int i=1;
    
    scanf("%d", &fact); 
    
	while(fact>0){
	result = result * fact;
        fact--;
	}
    
    printf("The factorial result is: %d\n", result);

return 0;
} 
