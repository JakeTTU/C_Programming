#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Sort the elements of an array in ascending order. The size of the array
//		is determined by user input.
//
//
int main(void) //Begin main function
{

int n, h, i, j;

//Create size of the array based on user input
printf("Enter number of terms.\n");
scanf("%d", &n);

int array[n];

//Initialize the elements of the array
printf("Enter %d numbers.\n", n);
for (i = 0; i < n; i++)
	scanf("%d", &array[i]);

//Nested loop to determine the values of the elements
for (i = 0; i < n; ++i)
{
	for (j = i + 1; j < n; ++j)
	{
		//Rearrange elements least to greatest
		if (array[i] > array[j])
		{
			h = array[i];
			array[i] = array[j];
			array[j] = h;
		}
	}
}

//Print the arranged elements of the array 
printf("The numbers arranged in ascending order are given below.\n");
for (i = 0; i < n; i++)
	printf("%d\n", array[i]);

return 0;
} //End main function
