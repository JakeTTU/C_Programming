#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Take input from user for two matix 
//		and find the sum of both matrices.
//
//

int main(void)		//Begin main function
{

int rows, cols;		//initialize and declare rows and columns for matrices 
int i, j;

printf("Enter the number of rows:");
scanf("%d", &rows);	//number of rows is input by user
printf("Enter the number of columns:");
scanf("%d", &cols);	//number of columns is input by user

//user enters values for the elements of the 2D array mat1
int mat1[rows][cols];	
printf("Enter values matrix 1:\n");	
for (i = 0; i < rows; i++){
	for (j = 0; j < cols; j++){
		scanf("%d", &mat1[i][j]);
	}
}

//user enters values for the elements of the 2D array mat2
int mat2[rows][cols];
printf("Enter values for matrix 2:\n");	
for (i = 0; i < rows; i++){
	for (j = 0; j < cols; j++){
		scanf("%d", &mat2[i][j]);
	}
}

//matrix 1 is printed in the correct format
printf("Matrix 1:\n");	
for (i = 0; i < rows; i++){
	for (j = 0; j < cols; j++){
		printf("%d ", mat1[i][j]);
	}
	printf("\n");
}

//matrix 2 is printed in the correct format
printf("Matrix 2:\n");	
for (i = 0; i < rows; i++){
	for (j = 0; j < cols; j++){
		printf("%d ", mat2[i][j]);
	}
	printf("\n");
}

//matrix 1 and matrix 2 are added and printed
printf("Additional Matrix:\n");	
for (i = 0; i < rows; i++){
	for (j = 0; j < cols; j++){
		printf("%d ", mat2[i][j]+mat1[i][j]);
	}
	printf("\n");
}

return 0;
} //End main function
