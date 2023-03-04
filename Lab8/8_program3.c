#include <stdio.h>
#include <string.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Sort names input by the user into dictionary order. 
//
//

int main(void)//begin main function
{

//initialize 2D character arrays
char name[10][10], tname[10][10], temp[10];
int i, j;

//take input of 5 names from user
printf("Enter 5 names:\n");

//scan the string into the 2d array for of 5 names
for (i = 0; i < 5; i++){
	scanf("%s", name[i]);
	//make a copy of the name in order to compare
	strcpy(tname[i], name[i]);
}
 
//loop through the list of 5 names
for (i = 0; i < 4 ; i++){
	for (j = i + 1; j < 5; j++){
		//compares the letters of the names
		if (strcmp(name[i], name[j]) > 0){
			//rearranges the names
			strcpy(temp, name[i]);
			strcpy(name[i], name[j]);
			strcpy(name[j], temp);
		}
	}
}

printf("\nNames in dictionary order:\n");

//loop through the list
for (i = 0; i < 5; i++){
	//print the names in order
	printf("%s\n", name[i]);
}

return 0;
}