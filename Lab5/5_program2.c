#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Find the sum of elements of an array which is equal to the target sum.
//		The array elements and a target element are entered from user 
//		and the elements would sum equal to the target element are found.
//
//
int main(void) //Begin main function
{

int array[5], n, i, j, sum, tsum;

//Elements for the array are entered by the user
printf("Enter 5 elements for the array.\n");
for (i = 0; i < 5; i++)
	scanf("%d", &array[i]);

//Target sum is entered by the user
printf("Enter a target sum.\n");
scanf("%d", &tsum);

//Nested loop sums up two elements of the array 
//and compares result to target sum entered
for (i = 0; i < 5; i++)
{
	for (j = i + 1; j < 5; j++)
	{
		sum = array[i] + array[j];
		if (sum == tsum)
		{
			//Result is printed with element positions and values
			printf("The target index is a[%d]=%d and b[%d]=%d.\n", i, array[i], j, array[j]);
		}
	}
}

return 0;
} //End main function
