#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//		Find out which number is greater among two numbers using if 
//		else statement.

int main(void) //Begin main function
{

int a; 
int b;

printf("Enter an integer\n");
scanf("%d", &a);			 //Store the integer value to a
printf("Enter another integer\n");
scanf("%d", &b);			//Store second integer value to b

//Check which input is greater
if(a > b)
	printf("%d is greater than %d.", a, b);
else
	printf("%d is greater than %d.", b, a);

return 0;
} //End main function
