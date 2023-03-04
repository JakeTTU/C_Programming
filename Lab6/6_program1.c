#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Write a program to swap two elements using call by value
//		and call by reference.
//

//In order to do a call by reference, we use the addresses of variables to pass the values.
void swap(int *a, int *b) //Establish function prototype
{

int temp;

//Swap the int values for the two variables in the addresses
temp = *b;
*b = *a;
*a = temp;
}

//Begin main function
int main(void)
{

int x, y;
printf ("Enter value for x:\n");
scanf("%d", &x);
printf ("Enter value for y:\n");
scanf("%d", &y);

//Call the swap function and swap values in &x and &y addresses
swap(&x, &y);

//Print output for x and y to user
printf("The value of x = %d and y = %d\n", x, y);

//End main function
return 0;
}



