#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:Print an equilateral triangle with the number of rows entered
//		by the user.
//
int main(void) //Begin main function
{

int x, y, rows, a;

//Enter number of rows by user
printf("Enter number of rows\n");
scanf("%d", &rows);

//Rows are separated by ending line
for (y=1; y<=rows; y++){

	//Spaces are added to the beginning of row to center *
	for (a=1; a<=rows-y; a++){
		printf(" ");
	}

	//# of *s are printed for that line
	for (x=1; x<=y; x++){	
		printf("* ");
	}

	printf("\n");
}
return 0;
} //End main function
