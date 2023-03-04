# include <stdio.h>
# include <string.h>

int main(){ //main function
        char arr1[50];			//declare a array to store user input
	int len;			//variable to store length of array
        printf("Enter a sentence: ");
        fgets(arr1,50,stdin);		//fgets instead of scanf to accept a long random string from user. read more about fgets.
        len = strlen(arr1);		// strlen function in C to determine thelength of array
        printf("Reversal of Sentence: ");
        for(int x = len-1; x >= 0; x--){//loop starting from second last element
                if(arr1[x] == ' '){	//find out the spaces to separate word
                        arr1[x] = '\0';	//\0 in C means a character with 0 value
                        printf("%s ", &(arr1[x])+1);//print out the word
                }
        }
        printf("%s" , arr1);
	return 0;
}