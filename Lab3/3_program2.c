#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//		Find the largest and smallest of four integers entered by
//		the user.
//
int main(void) //Begin main function
{

int a, b, c, d;

//Input from user
printf("Enter four integers.\n");
scanf("%d %d %d %d", &a, &b, &c, &d);

//Check to see which value is smallest
if (a<b & a<c & a<d)
	printf ("Smallest: %d\n", a);
else if (b<a & b<c & b<d)
	printf ("Smallest: %d\n", b); 
else if (c<a & c<b & c<d)
	printf ("Smallest: %d\n", c);
else if (d<a & d<b & d<c)
	printf ("Smallest: %d\n", d);

//Check to see which value is largest
if (a>b & a>c & a>d)
	printf ("Largest: %d\n", a);
else if (b>a & b>c & b>d)
	printf ("Largest: %d\n", b);
else if (c>a & c>b & c>d)
	printf ("Largest: %d\n", c);
else if	(d>a & d>b & d>c)
	printf ("Largest: %d\n", d);

return 0;
} //End main function
