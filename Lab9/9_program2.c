#include <stdio.h>

//	Name:		Jake Gonzalez
//	Section:	CS1412-502
//	Purpose of program: Interactive ATM menu that checks balance, makes deposits and withdrawal, change passwords, and terminates the program.  
//
//

int menu(); //function prototypes
int make_deposit ();
int make_withdrawal ();
int change_password ();

int main(void) //begin main function
{

int choice;
int balance = 1000.00;
int password = 12345678;

printf("\nWelcome to the ATM Menu!\n\n");

do
{
    choice = menu(); //call menu function to determine choice

    switch(choice){
	case 1: //show user current balance amount
	    printf("Execute check balance\n");
	    printf("Balance is $%d\n\n", balance);
	    break;
	case 2:
	    balance = balance + make_deposit(); //deposit amount is added to balance
	    printf("New balance amount is $%d\n\n", balance);
	    break;
	case 3:
	    balance = balance - make_withdrawal(); //withdrawal amount is subtracted from balance
	    printf("New balance amount is $%d\n\n", balance);
	    break;
	case 4:	
	    printf("Old password is %08d\n", password);
	    password = change_password(); //password is updated from change_password function
	    printf("New password is %08d\n\n", password);
	    break;
	case 5: //terminates program from menu selection
	    printf("Execute Exit\n");
	    printf("Terminating Program\n");
	    printf("Have a nice day!\n\n");
	    break;
	default:
	    break;
    }
} while(choice != 5); //will not loop if 5 is selected

return 0; //end main function
}


int menu(void) //begin menu function 
{

    int choice;

    printf("1) Check balance\n");
    printf("2) Make a Deposit\n");
    printf("3) Make a Withdrawal\n");
    printf("4) Change Password\n");
    printf("5) Exit\n");
    printf("\nPlease type a number from 1 to 5 to select a menu item:");

    while ((scanf("%d", &choice) != 1) //input must be an integer
	|| (choice < 1)  //only choice 1 through 5 are valid
	|| (choice > 5))
    {
	 fflush(stdin); //clear stdin and ask the user to try again if invalid
	 printf("\nInvalid selection. Please try again:");
    }
    
    printf("\nUser input: %d\n", choice);
    return choice; //end menu function
}


int make_deposit() //begin deposit function
{
    int deposit;
    printf("Execute Make a Deposit\n");
    printf("Enter amount to deposit:$");
    scanf("%d", &deposit);

    return (deposit); //end deposit function
}


int make_withdrawal() //begin withdrawal function 
{
    int withdrawal;
    printf("Execute Make a Withdrawal\n");
    printf("Enter the amount of withdrawal:$");
    scanf("%d", &withdrawal);

    return (withdrawal); //end withdrawal function
}


int change_password() //begin password function 
{
    int password;
    printf("Execute Change Password\n");
    printf("Enter new password: ");
    scanf("%8d", &password);

    return (password); //end password function
}





