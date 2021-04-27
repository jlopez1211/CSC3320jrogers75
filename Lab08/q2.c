#include<stdio.h>

int main () {

	float letters;
	float words;
	char character;
	char space;
	
	printf("Enter a sentence: ");
	
	while((character=getchar()) != '\n'){
	     if(character != ' '){
		if(!space){
		    words++;
		    space = 1; 
		}
		letters++;
	  }else
 	     space = 0;
	}
	
	printf("Average word length: %.1f\n",letters/words);

	return 0;
}
