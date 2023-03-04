#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//		Find the sum of two integers by taking inputs from the user.
//
int main(void){	//Begin main function

int a;
int b;

printf("Input an integer.\n");
scanf("%d", &a);
printf("Input another integer.\n");
scanf("%d", &b);
printf("%d + %d = %d\n", a, b, a+b); //Adds the two inputs and displays the output

return 0;
} //End main function
