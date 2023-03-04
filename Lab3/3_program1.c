#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//		Write a program that calculates how many digits
//		a number contains assuming 4 digits max.
//
int main(void) //Begin main function
{

int number;
int digits = 0;

//Input from user 
printf("Please enter a number.\n");
scanf("%d", & number);

int value = number;

//Divides by 10 to remove digit
while (number != 0)
{
	//Digits incremented by 1 when divided by 10
	digits++;

	number /= 10;
}
//Print result
printf("%d contains %d digits.\n", value, digits);

return 0;
} //End main function
