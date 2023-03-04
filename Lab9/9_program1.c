#include <stdio.h>
#include <string.h>
#define Max_Length 50
#define Max_String 100

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Get a string input from user and encrypt the message and return the ciphertext. Then ask user again if she/he wants to continue or not. Finally print all the original messages in alphabetically sending order.
//
//
//

//start of encryption function
char* encrypt_message (char* message)
{
int k = 0, i, l;
int even, odd;
char array1[100];
char array2[100];

//separate the message by even and odd elements
for (i = 0; i < strlen(message); i++)
{
	if(i%2 == 0){
		array1[even] = *(message+i);	//even elements stored in array1
		even++;
	}
	else{
		array2[odd] = *(message+i);	//odd elements stored in array2
		odd++;	
	}
}
array1[even] ='\0';
array2[odd] = '\0';
return strcat(array1,array2); //concatenation of two arrays to make one encrypted message

}

//start of main function
int main()
{
char plain_text[Max_String][Max_Length];
char cipher_text[Max_String][Max_Length];
int str_len, i, j;
char *temp;
char choice = 'n';
int l = 0;
char *str;

do
{
	printf("Please enter a message: ");	//take input from user
	scanf(" %[^\n]s", plain_text[l]);	
	printf("\n");	//received bus error 10 when printf is not here?? 
	str = encrypt_message(plain_text[l]);	//call encryption function with the input as the parameter 
	printf("\n");   //received bus error 10 when printf is not here?? 
	printf("The encrypted message is: %s\n", str); //print the encrypted message
	printf("Do you want to continue (y/n)? : ");   //ask user if to continue
	scanf(" %c", &choice);
	while(getchar() != '\n')
		continue;
	l++;
} while (choice == 'y'); //loops if the user continues

{
	printf("\nThe original messages in alphabetical order are\n");
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < l - 1; j++)
		{
			//evaluates and rearranges original messages based on alphabetical order
			if (strcmp(plain_text[j], plain_text[j + 1]) > 0) 
			{
				strcpy(temp, plain_text[j]);
				strcpy(plain_text[j], plain_text[j + 1]);
				strcpy(plain_text[j + 1], temp);
			}
		}
	}
	//loop to prints all the organized original messages
	for (i = 0; i < l; i++)
	{
	printf("%s\n", plain_text[i]);
	}
}
return 0;
}
