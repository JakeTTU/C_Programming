#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//		Write a program that converts a numerical grade to a letter grade.
//
int main(void) //Begin main function
{

int grade;
int letter;

//Input from user
printf("Please enter a numerical grade.\n");
scanf("%d", &grade);

//Convert numerical grade to a group
if (grade <=100 & grade >=90)
	letter=1;
else if (grade <90 & grade >=80)
	letter=2;
else if (grade <80 & grade >=70)
	letter=3;
else if (grade <70 & grade >=60)
	letter=4;
else if (grade <60 & grade >=0)
	letter=5;

//Convert grade group to letter grade
switch (letter){
	case 1:
		printf("Letter Grade: A");
		break;
	case 2:
		printf("Letter Grade: B");
		break;
	case 3:
		printf("Letter Grade: C");
		break; 
	case 4:
		printf("Letter Grade: D");
		break;
	case 5:
		printf("Letter Grade: F");
		break;
	default:
		printf("Illegal grade.\n");
}
return 0;
} //End main function
