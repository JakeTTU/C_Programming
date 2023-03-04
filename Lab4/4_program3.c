#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:Print a calendar based on number of days entered by user,
//		and by starting day entered by user.
//
int main(void) //Begin main function
{

int days, first, a, b, c=1, d;

//# of days is entered by user
printf("Enter number of days in month\n");
scanf("%d", &days);

//Start day is entered by user
printf("Enter starting day of the week (1=Sun, 7=Sat)\n");
scanf("%d", &first);


//Calendar leaves blanks until starting day
for (a = 0; a < first-1; a++){
	printf("   ");
}

//Days are printed up to the # of days entered by user
for (b = 0; b < days; b++){

	//New line is made every 7 days
	if ( a % 7 == 0)
		printf("\n");

	printf("%2d ", c);
	c++;
	a++;
}
return 0;
} //End main function
