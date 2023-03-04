#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Declare and initialize a double, an int, and a char 
//		variable. Next declare and initialize a pointer to each of the three
//		variables. Your program should then print the address of, and value
//		stored in, and the memory size (in bytes) of each of the six
//		variables.
//
int main(void)		//Begin main function
{

int x = 10;		//Initialize and declare int variable
int *a = &x;		//Initialize and declare pointer variable 

printf("int variable x:\n");			//Display information for int variable
printf("Memory address: %p\n", &x);		//Memory address is printed
printf("Value: %d\n", x);			//Value of x is printed
printf("Memory size: %zu bytes\n", sizeof(x));	//Memory size is printed using sizeof()
printf("\n");

printf("pointer variable a:\n");		//Display same information for pointer variable
printf("Memory address: %p\n", &a);
printf("Value: %d\n", *a);
printf("Memory size: %zu bytes\n", sizeof(a));
printf("\n");

double y = 20;
double *b = &y;

printf("double variable y:\n");			//Display same information for double variable
printf("Memory address: %p\n", &y);
printf("Value: %f\n", y);
printf("Memory size: %zu bytes\n", sizeof(y));
printf("\n");

printf("pointer variable b:\n");		//Display same information for pointer variable
printf("Memory address: %p\n", &b);
printf("Value: %f\n", *b);
printf("Memory size: %zu bytes\n", sizeof(b));
printf("\n");

char z = 'c';
char *c = &z;

printf("char variable z:\n");			//Display same information for char variable
printf("Memory address: %p\n", &z);
printf("Value: %c\n", z);
printf("Memory size: %zu bytes\n", sizeof(z));
printf("\n");

printf("pointer variable c:\n");		//Display same information for pointer variable
printf("Memory address: %p\n", &c);
printf("Value: %c\n", *c);
printf("Memory size: %zu bytes\n", sizeof(c));
printf("\n");

return 0;
}			//End main function
