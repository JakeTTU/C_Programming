#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//		Find whether a number is even or odd by taking an input
//		number from the user.

int main(void) //Begin main function
{

int a; 

printf("Enter an integer\n");
scanf("%d", &a);			 //Store the integer value to a

// Check to see if there is a remainder when divided by 2
if(a % 2 == 0)
	printf("%d is even.", a);
else
	printf("%d is odd.", a);

return 0;
} //End main function
