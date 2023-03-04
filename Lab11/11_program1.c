#include <stdio.h>
#include <stdlib.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//
//
int main() //Begin main function
{

struct student{
    int id;
    char firstname[15]; 
    char lastname[15];
};

FILE *fptr;

fptr = fopen("program1.txt","w");

if(fptr == NULL)
{
    printf("Error!");
    exit(1);
}

struct student st;

printf("Enter Student ID: ");
scanf("%d",&st.id);
fprintf(fptr,"%d\n", st.id);

printf("Enter First Name: ");
scanf("%s", st.firstname);
fprintf(fptr,"%s\n", st.firstname);

printf("Enter Last Name: ");
scanf("%s", st.lastname);
fprintf(fptr,"%s\n", st.lastname);

fclose(fptr);

if ((fptr = fopen("program1.txt","r")) == NULL){
    printf("Error opening file!");
    exit(1);
}

fscanf(fptr,"%d", &st.id);
printf("Student ID: %d\n", st.id);

fscanf(fptr,"%s", st.firstname);
printf("First Name: %s\n", st.firstname);

fscanf(fptr,"%s", st.lastname);
printf("Last Name: %s\n", st.lastname);

fclose(fptr);


return 0;
} //End main function
