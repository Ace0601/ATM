// Name: Eloisa A. Celaje 
// Section: BSIT 1B
// Preliminary Exam
// This is a program similar to an ATM machine that offers Balance Inquiry, Deposit, and Withdraw money.
//The password is 6111

#include<stdio.h>
#include<ctype.h>

int main()
{
    char Code;
    int password;
    int Deposit, Withdraw;
    password = 6111;
    
    printf("\n\t********************\n");
    printf("\t Welcome to BankCo!");
    printf("\n\t********************\n");
    printf("\nHow can we help you?");
    printf("\n\n [A] Balance Inquiry");
    printf("\n [B] Deposit Money");
    printf("\n [C] Withdraw Money");
    printf("\n [D] Exit");
    printf("\n\n Enter transaction code: ");
    scanf("%c", &Code);
  
    //Balance Inquiry 
    if(toupper(Code)=='A')
    {
    printf("\n Enter your password: ");
    scanf("%d", &password);
        
        //correct password
        if(password==6111)
        {
        	printf("\n\nYour current balance is Php 50,000.00");
        	printf("\n\n   Thank you for choosing BankCo!");
        	printf("\n\t  Have a nice day!");
 		}	
        //wrong password
        else
        {
        	printf("\nSorry, you have entered an incorrect password.\n Thank you for banking with us!");
    	}
    
    }
    
    //Deposit
    else if(toupper(Code)=='B')
    {
    printf("\n Enter your password: ");
   	scanf("%d", &password);
   			//correct password
    		if(password==6111)
    		{
        	    printf("\n\nEnter amount to be deposited: ");
    			scanf("%d", &Deposit);
     			printf("Your current balance is now Php %d", 50000+Deposit);
     			printf("\n\n   Thank you for choosing BankCo!");
     			printf("\n\t  Have a nice day!");
    		}
    		//wrong password
			else
  		  	{
         	   printf("\nSorry, you have entered an incorrect password.\n Thank you for banking with us!");
       		}
    }
    
    //Withdraw
    else if(toupper(Code)=='C')
    {
    printf("\n Enter your password: ");
    scanf("%d", &password);
    		//correct password
    		if(password==6111)
    		{
       	    printf("\n\nEnter amount to be withdrawn: ");
    		scanf("%d", &Withdraw);
        		if(Withdraw>50000)
        		{
            		printf("\n\nSorry, you do not have enough balance.");
        		}
        		else
        		{
        			printf("Your balance left is Php %d", 50000-Withdraw);
        			printf("\n\n   Thank you for choosing BankCo!");
        			printf("\n\t  Have a nice day!");
           		}
        	}
        	//wrong password
        	else
  		  	{
         	   printf("\nSorry, you have entered an incorrect password.\n Thank you for banking with us!");
       		}
    }
    
    //Exit
    else if(toupper(Code)=='D')
    {
        printf("\n   Thank you for choosing BankCo!");
		printf("\n\t  Have a nice day!");
    }
    
    //None of the above 
    else 
    {
        printf("Sorry, you have entered an invalid code.");
    }
    
return 0;
}
