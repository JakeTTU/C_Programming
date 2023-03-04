#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Write a program in C to find the sum of the series 
//		1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
//
//

float factorial(int);	//function prototype
 
int main()		//start of main function
{
int n,i;
float sum = 0;

for (i = 1; i <= 5; i++){	//begin loop to find summation
	if (i == 1){		//first term = 1
		sum = 1;	
	}
	else{			
		//factorial function is called and return value is used in equation
		sum = (sum + (factorial(i)/(i)));	
	}
}

printf("The sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5\n");

printf("%f\n", sum);		//print summation
 
return 0;			//end main function
}

float factorial(int n){		//start factorial function
	if (n == 0){		//returns value for n = 0
		return 1;
	}
	else{			//returns factorial value for nth term
		return(n * factorial(n-1));
	}
}


