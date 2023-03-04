#include <stdio.h>
#include <stdlib.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//
//
int main() //Begin main function
{

FILE *fptr;
char ch;
int linecount = 0, wordcount = 0, charcount = 0;

fptr = fopen("program1.txt","r");

if ((fptr = fopen("program1.txt","r")) == NULL){
    printf("Error opening file!");
    exit(1);
}

while ((ch=getc(fptr)) != EOF) {
    if (ch != ' ' && ch !='\n'){
	++charcount; 
    }
    if (ch == ' ' || ch == '\n'){
	++wordcount;
    }
    if (ch == '\n'){
	++linecount;
    }
}

if (charcount > 0){
    ++linecount;
    ++wordcount;
}

printf("Lines: %d \n", linecount);
printf("Words: %d \n", wordcount);
printf("Charachters: %d \n", charcount);

return 0;
} //End main function
