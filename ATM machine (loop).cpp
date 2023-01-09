#include<stdio.h>
int main()
{
	int dep, wdraw, code, password=1161, transact=1;
	
	printf("********************************");
	printf("\n        WELCOME TO BanCo \n");
	printf("********************************");
	
	do
	{
		printf("\n [1] Balance Inquiry \n [2] Deposit \n [3] Withdraw \n [4] Exit");
		printf("\n\n Please enter code: ");
		scanf("%d", code);
	
		switch(code)
		{
			//balance inq
			case 1:
				printf("Enter password: ");
				scanf("%d", password);
				switch(password)
				{
					case 1161:
						printf("Your current balance is Php 50,000.00. \n Thank you for banking with us. Have a nice day!");
						break;
					default:
						printf("\n Sorry, you have entered an incorrect password.");
				}
				break;
			//deposit
			case 2:
				printf("Enter password: ");
				scanf("%d", password);
				switch(password)
				{
					case 1161:
						printf("Enter amount to be deposited: ");
						scanf("%d", dep);
						printf("\nYou now have %d.", 50000 + dep);
						printf("\n\n Thank you for banking with us. Have a nice day!");
						break;
					default:
						printf("\n Sorry, you have entered an incorrect password.");
				}
				break;
			//withdraw
			case 3:
				printf("Enter password: ");
				scanf("%d", password);
				switch(password)
				{
					case 1161:
						printf("\nEnter amount to be withdrawn: ");
						scanf("%d", wdraw);
						if (dep<=50000)
							printf("\nYour remaining balance is %d", 50000 - wdraw);
						else
							printf("\nSorry, you don't have enough balance.");
						break;
					default:
						printf("\n Sorry, you have entered an incorrect password.");
				}
				break;
			//exit	
			default:
				printf("\n Thank you for banking with us. Have a nice day!");
		}	
	}
	while (transact==1);
	{
		printf("\n Would you like to have another transaction?");
		printf("\n [1] Yes \n [2] No");
		scanf("%d", &transact);
	}
	printf("Thank you for banking with us. Have a nice day!");
	
	return 0;
}
