#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//	This program is a demo program to understand the basics of
//	how to create a c file, edit it, save it, compile it, and
//	execute it.
//
// Funciton main begins program excecution
int main(void)
{
	int ID;
	float shipweight;

	ID = 4518;		//Initialize ID
	shipweight = 24.625f;	//Initialize Shipping Weight

	//display the string
	printf(" Welcome to C\n");

	//display content of variables
	printf("The ID of the item is %d\n", ID);
	printf("The shipping weight of the item is %f0.3\n", shipweight);

	//We have to return
	return 0;
} //end function main
