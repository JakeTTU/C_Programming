#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//		Return the ASCII value of any character input.
//
int main(void) //Begin main function
{

char a; // Initialize a as a character

printf("Enter any character.\n");
scanf("%c", &a);
printf("The ASCII value of %c = %d", a, a);

return 0;

} //End main function
