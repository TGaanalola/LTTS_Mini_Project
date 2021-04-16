#include<stdio.h>
#include "bank.h"
void withdraw(customer list[], int s, int num, int amt)
{
    int i = search(list, s, num);
    if (i ==  - 1)
    {
        printf("Record not found\n");
    } 
    else if (list[i].balance < amt)
    {
        printf("Insufficient balance\n");
    }
    else
    {
        list[i].balance -= amt;
    } 
}
