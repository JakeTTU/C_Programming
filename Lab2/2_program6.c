#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//		Determine someones eligibility for a job based on
//		certain criteria.

int main(void) //Begin main function
{

int age;
int exp;
int projects;

//Input user's age
printf("Please enter your age:\n");
scanf("%d", &age);

//Input user's work experience
printf("How any years of work experience do you have?\n");
scanf("%d", &exp);

//Input user's project completed
printf("How many projects have you worked on?\n");
scanf("%d", &projects);

//Show user input values
printf("Age = %d, Experience = %d years, Projects = %d\n", age, exp, projects);

//Check to see if user meets the qualification requirements
if (age > 18 & exp > 3 & projects > 5 )
	printf("Congratulations, you are eligible for the job!");

else
	printf("Sorry, you do not  meet the qualifications for the position.");


return 0;
} //End main function
