#include <stdio.h>
#include <string.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Read a message and check whether it is a palindrome.
//
//
int main(void) //Begin main function
{

//Initialize character array
char arr1[50];						
printf("Enter a sentence to check if it is a palindrome:\n");

//Get input from user
fgets(arr1,50,stdin);	
int start, middle, end, len = 0;
int size = 0;
int i;

//Find length of the input
for (i = 0; i < 50; i++){
	if (arr1[i] != '\0'){
		len++;
	}
	else{
		break;
	}
}

size = len - 1;
end = size - 1;
middle = size/2;

//Check first and last character of the character array and work towards middle
for (start = 0; start < middle; start++)
{
	if (arr1[start] != arr1[end])
	{
		//If the characters do not match, it is not a palindrome
		printf("Not a palindrome.\n");
		break;
	}
	end--;
}

//If the loop above completes, it is a palindrome
if (start == middle)
printf("Palindrome.\n");

return 0;
} //End main function
