#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Get information input from user and display it using structures. 
//
//
int main(void) //Begin main function
{

struct {  //Declaring structure variables
    int roll_no;  
    char first_name[25];
    char last_name[25];
    char facility[25];
    char address[25];
    int contact_no;
} record1; 

printf("Roll No.:");
scanf("%d", &record1.roll_no); //initializing structure variable roll_no

printf("First Name:");
scanf("%s", record1.first_name); //initializing structure variable first_name

printf("Last Name:");
scanf("%s", record1.last_name); //initializing structure variable last_name

printf("Facility:");
scanf("%s", record1.facility); //initializing structure variable facility

printf("Address:");
scanf("%s", record1.address); //initializing structure variable address

printf("Contact No.:");
scanf("%d", &record1.contact_no); //initializing structure variable contact_no

printf("\n******************\n\n");

//Display structure information to user
printf("Roll No.:%d\n", record1.roll_no);
printf("First Name:%s\n", record1.first_name);
printf("Last Name:%s\n", record1.last_name);
printf("Facility:%s\n", record1.facility);
printf("Address:%s\n", record1.address);
printf("Contact No.:%d\n\n", record1.contact_no);

return 0;
} //End main function
