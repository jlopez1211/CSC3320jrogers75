#include<stdio.h>
/* Jamie Lopez
 * CSC3320
 * Lab 10 - In Lab
 * Due 3.26.2021   */

// Write the declaration of function split_time

void split_time(long, int*, int*, int*);

int main(){
    int n, hr, min, sec;
    printf("Enter seconds: ");
    scanf("%d", &n);
	/* Write the statement to call split_time */
    split_time(n, &hr, &min, &sec);//call split_time and use & for pointers   
    printf("Converted format: %d hour %d mins %d secs\n", hr, min, sec);
    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec){
/* Write the statements to calculate hr, min, sec   */
    int remainder = 0;
    *hr = total_sec / 3600; //(60 seconds)*(60 mins)=3600 seconds/hr
    remainder = total_sec % 3600;// Determine # of seconds left after hours 
                                // are calculated
    *min = remainder / 60; // 60 seconds/min; Use remaining # of seconds to 
                           // determine # of minutes left
    *sec = remainder % 60; // remaining seconds after hrs/mins determined
}
