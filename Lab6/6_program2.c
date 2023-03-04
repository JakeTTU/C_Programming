#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Store a series of integers into an array and sort the array using a recursive
//		function in order to put the largest integer in the last element of the array.
//

void section_sort(int a, int b){ //Establish function prototype
}

void swap(int *a, int *b) //Establish function prototype
{

int temp;

//Swap the int values for the two variables in the addresses
temp = *b;
*b = *a;
*a = temp;
}

void selection_sort(int arr[], int n)
{

//Exit function when all elements have been evaluated
if (n == 1)
	return;

//Compare array element with the following element
for (int i = 0; i < n-1; i++){
	if (arr[i] > arr[i+1])
		//Larger element moves to greater position
		//Smaller elements move to lesser position
		swap(&arr[i], &arr[i+1]);
	}
//Function recursively calls itself
//Leaves the largest element in the last position
selection_sort(arr, n-1);
}


int main(void) //Begin main function
{

int n;

//Array length is taken from the user
printf("Enter the total number of elements in the series:");
scanf("%d", &n);

//Initialize variable length array
int arr[n];

int counter = 0;

while (counter < n){

//User inputs integers into the array
printf("Enter element %d:", counter);
scanf("%d", (arr+counter));

counter++;

}

//Calls selection_sort function
selection_sort(arr, n);

printf("Sorted array elements smallest to largest:\n");

//Print the sorted elements of the array
for (int i=0; i < n; i++){
printf("%d\n",arr[i]);
}


return 0;
} //End main function