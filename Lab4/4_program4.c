#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:Print Fibonacci series up to n number of terms entered by user.
//
//
int main(void) //Begin main function
{
int n, seq, a=0, b=1, c;

//# of terms is entered by user
printf("Enter n number of terms for Fibonacci series\n");
scanf("%d", &n);

//Sequence is printed up to n # of terms
for (seq=1; seq<=n; seq++){
	printf("%d, ", a);
	c = a + b;
	a = b;
	b = c;
	}
return 0;
} //End main function
