#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//
//
int main(void) //Begin main function
{
printf("Enter a sentence.\n");
char arr[80];
fgets(arr, 80, stdin);
printf("%s\n", arr);


return 0;
} //End main function
