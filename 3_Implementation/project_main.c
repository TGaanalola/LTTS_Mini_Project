#include <stdio.h>
#include<string.h>
#include "bank.h"

int main()
{
    customer data[20];
    int n, z, choice, acc_no, amount, index;
    char pass[11],password[11]="gaana@2000";
	login:
    printf("\n\tEnter the password to login at least 10 characters long:");
	scanf("%s",pass);
	z=check(pass,password);
	if(z)
	{
		printf("\nInvalid!");	
        goto login;		
      
	}
    printf("Banking System\n\n");
    printf("Number of customer records you want to enter? : ");
    scanf("%d", &n);
   
    acc(data, n);
    do
    {

        printf("\nBanking System Menu :\n");
        printf("Press 1 to display all records.\n");
        printf("Press 2 to search a record.\n");
        printf("Press 3 to deposit amount.\n");
        printf("Press 4 to withdraw amount.\n");
        printf("Press 0 to exit\n");
        printf("\nEnter choice(0-4) : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                display(data, n);
                break;
            case 2:
                printf("Enter account number to search : ");
                scanf("%d", &acc_no);
                index = search(data, n, acc_no);
                if (index ==  - 1)
                {
                    printf("Record not found : ");
                }
                else
                {
                    printf("A/c Number: %d\nName: %s\nBalance: %d\n",
                        data[index].acc_no, data[index].name,
                        data[index].balance);
                }
                break;
            case 3:
                printf("Enter account number : ");
                scanf("%d", &acc_no);
                printf("Enter amount to deposit : ");
                scanf("%d", &amount);
                deposit(data, n, acc_no, amount);
                break;
           
            case 4:
                printf("Enter account number : ");
                scanf("%d", &acc_no);
                printf("Enter amount to withdraw : ");
                scanf("%d", &amount);
                withdraw(data, n, acc_no, amount);
        }
    }
    while (choice != 0);
    return 0;
}     
