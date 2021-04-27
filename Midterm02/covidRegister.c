#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 35
#define MAX_REG 25  
#define MAXTEMP 50

/* Jamie Lopez
 * CSC3320
 * Midterm2
 * Question 4 */

struct vaccreg{
	char fname[NAME_LEN+1];
	char lname[NAME_LEN+1];
	//int dob;
	int age;
        char sex; 
	int dosenum;
	//int prevdose;
	char vbrand;
	int reszip;
	char regcode;
} reg[MAX_REG];
   
int num_reg = 0;  // Declare to track number of people currently registered

   void register1();   //Define function
   void generate_code(struct vaccreg reg[num_reg]);
   void retrieve(struct vaccreg reg[num_reg]);

int main()
{ 
	char begin;
	printf("**********************************\n");
        printf("**                              **\n");
        printf("** Welcome to the Covid Vaccine **\n");
        printf("** Registration Database        **\n");
        printf("**                              **\n");
        printf("**********************************\n\n\n");
                
        printf("Ready to begin your registration?(Y/N)  \n");
	scanf(" %c", &begin);
	if((begin == 'Y')||(begin == 'y')){
        register1();
	}  else if ((begin == 'N')||(begin == 'n')){
	printf("Good bye \n");
	return 0;
	} else {
	printf("Invalid response. Try again. \n");
	return 0;
	}
        
	void retrieve(struct vaccreg reg[num_reg]);

return 0;
}

void register1(){
    struct vaccreg *ptr;
    ptr = (struct vaccreg*)malloc(MAX_REG*sizeof(struct vaccreg)); 
    struct vaccreg reg[MAX_REG];     
	for(; num_reg < MAX_REG; num_reg++){ 
	printf("Enter your first name: ");
        scanf(" %[^\n]%*c", ptr->fname);
        printf("Enter your last name: ");
	scanf(" %[^\n]%*c",ptr->lname);
	//printf("Enter your date of birth(mm/dd/yyyy): ");
	//scanf("%d/%d/%d", &m, &d, &y);
	printf("How old are you as of today? \n");
	scanf(" %d", ptr->age);
	printf("Enter your sex (M/F/X): \n   M = Male \n   F = Female \n   X = Do not wish to identify \n");
        scanf(" %c", ptr->sex);
            if((ptr->sex != 'M')||(ptr->sex != 'm')||(ptr->sex !='F')||(ptr->sex !='f')||(ptr->sex !='X')||(ptr->sex != 'x')){
            printf("Invalid option. Please try again.\n");
               }   
	printf("What is the dose number needed?\n 1 = first\n 2 = second\n");
	scanf(" %d", ptr->dosenum);
	   if(ptr->dosenum != (1 ||2)){
	       printf("Invalid option. Please try again.\n");
	    }
	//printf("Enter date of last dose (mm/dd/yyyy): \n");
	//scanf("%d/%d/%d", &m, &d, &y);
	printf("Vaccine Brand: \nP = Pfizer \nM = Moderna \nJ = J&J\n");
	scanf(" %c", ptr->vbrand);
	if(ptr->vbrand != ('P'||'p'||'M'||'m'||'J'||'j')){
	    printf("Invalid option. Please try again.\n");
            exit (1);
         }
	printf("What is your home zip code? \n");
	scanf("%d", ptr->reszip);        
	}
      void generate_code(struct vaccreg reg[num_reg]);
}

void retrieve(struct vaccreg reg[num_reg]){
     	printf("REGISTRATION INFORMATION SUMMARY \n\n");
        printf("Registration Confirmation Code: %s\n", reg[num_reg].regcode);
	printf("First Name: %s", reg[num_reg].fname);
 	printf("Last Name:  %s", reg[num_reg].lname);
	//printf("Date of Birth: \n");  PLACEHOLDER
	printf("Age: %d\n", reg[num_reg].age);
	printf("Sex: %c\n", reg[num_reg].sex);
	printf("Dose number needed: %d\n", reg[num_reg].dosenum);
  	//printf("Date of last dose: \n");  PLACEHOLDER
  	printf("Vaccine Brand: %c\n", reg[num_reg].vbrand);
	printf("Residential Zip Code: %d\n", reg[num_reg].reszip);
  }

void generate_code(struct vaccreg reg[num_reg]){
	char temp[MAX_REG];
        
          temp[0] = reg[num_reg].fname[0];
          temp[1] = reg[num_reg].lname[0];
          temp[4] = reg[num_reg].vbrand;
	  reg[num_reg].regcode = temp[MAX_REG];       
}
