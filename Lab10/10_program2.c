#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Read data and determine totals and maximums using structures. 
//
//

int main(void){ //Begin main function

//Declaring structure type
struct student{
    char name[25];
    int roll_no;
    int subject[3];
};

int i, j, num_students, total, max, n_max;

//Get how many students whose scores we are examining 
printf("Enter the number of students:");
scanf("%d", &num_students);

struct student st[num_students];
int a[num_students];

//Loop to initialize the name and roll number for each student (i)
for (i = 0; i < num_students; i++){
    printf("Enter name and roll number for student %d: ", i);
    scanf("%s", st[i].name);
    printf("Enter roll number for student %d: ", i);
    scanf("%d", &st[i].roll_no); 
}

//Loop to initialize the scores for each subject (j) for each student (i)
for (i = 0; i < num_students; i++){
    for (j = 0; j < 3; j++){
        printf("Enter marks of student %d for subject %d: ", i, j);
        scanf("%d", &st[i].subject[j]);
    }
}

//Loop loop to total scores and display result for each student
for (i = 0; i < num_students; i++){

    total = 0;

    for (j = 0; j < 3; j++){ 
	total = total + st[i].subject[j];
    }
    printf("Total marks obtained by %s are %d\n", st[i].name, total);
    a[i] = total;
      
}
//Loop to display which subject (j) each student (i) had the maximum marks
for  (j = 0; j < 3; j++){

    max = 0;

	for (i = 0; i < num_students; i++){
	    if (max < st[i].subject[j]){
		max = st[i].subject[j];
		n_max = i;
	    }
	}
    printf("%s got maximum marks = %d in Subject: %d\n",st[n_max].name, max, j);	
}
return 0;
} //End main function
