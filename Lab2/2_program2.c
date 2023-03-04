#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//		Find the area and perimeter of a circle by taking radius i
//		input from the user.
//
int main(void){ //Begin main function

float r;
float p;
p=3.14159; //Define pi as 3.14159

printf("Input radius of circle\n");
scanf("%f", &r);	//Radius value is received by the user
printf("The perimeter of the circle is %f.\n", r*2*p);
printf("The area of the circle is %f.\n", r*r*p);
return 0;

} //End main function
