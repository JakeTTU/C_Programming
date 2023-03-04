#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Count the number of vowels and consonants in an input from user.
//
//

int main(void) //begin main function
{

char str[100];
char *ptr;
int  vowel, cons, space;

//get input from user
printf("Enter a string: ");
fgets(str, 100, stdin);
     
//assign address of str to ptr
ptr = str;
     
vowel = 0;
cons = 0;
space = 0;

//evaluate the elements of the character string
while(*ptr!='\n'){
	if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
		vowel++;
	else if (*ptr == ' ')
		space++;
	else
		cons++;
	//increase the pointer, to point next character
	ptr++;
}

//print the number of vowels and consonants to the user 
printf("Total number of Vowels: %d, Consonants: %d\n",vowel, cons);        

return 0;
} //end main function
