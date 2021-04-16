#include<stdio.h>
#include "bank.h"
void deposit(customer list[], int s, int num, int amt)
{
    int i = search(list, s, num);
    if (i ==  - 1)
    {
        printf("Record not found");
    } 
    else
    {
        list[i].balance += amt;
    }
}
