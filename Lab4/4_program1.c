#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Create a right triangle with 5 rows.
//
//
int main(void) //Begin main function
{
int x, y;

//Rows are separated by ending line
for (y=1; y<=5; y++){

	//# of stars are printed for that row
	for (x=1; x<=y; x++){
		printf("* ");
	}
	printf("\n");
}
return 0;
} //End main function
