#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program:
//
//

//Definition of structure type
typedef struct complex{
    float real;
    float imag;
} complex;

complex add(complex num1,complex num2); //Function prototype

int main() //Begin main function 
{
    complex num1, num2, temp; //initialize structures

    //initialize first structure's variables
    printf("For 1st complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &num1.real, &num1.imag);

    //initialize second structure's variables 
    printf("\nFor 2nd complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &num2.real, &num2.imag);

    temp = add(num1, num2); //Function call to initialize result structure
    //Display the summation stored in temp structure
    printf("\nSum = %.1f + %.1fi\n", temp.real, temp.imag);

    return 0;
} //End main function 


//Function to add the two structures
complex add(complex num1, complex num2)
{
    complex temp;

    temp.real = num1.real + num2.real;
    temp.imag = num1.imag + num2.imag;

    //return temp structure
    return(temp);
}
