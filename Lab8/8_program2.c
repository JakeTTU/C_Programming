#include <stdio.h>
#include <string.h>
#include <ctype.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Find the smallest and largest word in a sentence input by the user. 
//
//

int main(void) //begin main function
{

char string[100], word[20], big[20], small[20], c;
int i = 0, j = 0, flag = 0;

//take input from user
printf("Enter a sentence:\n");

//declare the element for the character string as the char input by the user
i = 0;
do{
	fflush(stdin);
	c = getchar();
	string[i++] = c;
}

//when the new line symbol is entered, the sting will end.
while (c != '\n');
string[i - 1] = '\0';

//characters between spaces will be copied into a different char array
for (i = 0; i < strlen(string); i++){
	while (i < strlen(string) && !isspace(string[i]) && isalnum(string[i])){
		word[j++] = string[i++];
	}
	if (j != 0){
		word[j] = '\0';
		
		//checks to see if program is at the end of the sentence
		if (!flag){
			flag = !flag;
			strcpy(big, word);
			strcpy(small, word);
		}
		//if the current word is bigger than the previous biggest, it will be copied into big
		if (strlen(word) > strlen(big)){
			strcpy(big, word);
		}
		//if the current word is smaller than the previous smallest, it will be copied into small
		if (strlen(word) < strlen(small)){
			strcpy(small, word);
		}
		//will take us out of the loop
		j = 0;
	}
}

//results are printed to the user
printf("The largest word is '%s'\n", big);
printf("The smallest word is '%s'\n", small);

return 0;
} //end main function 