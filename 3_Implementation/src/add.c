#include <stdio.h>
#include<string.h>
#include "bank.h"

user add(info *acc,char *name,int cust_id, int age,char *address,int phone,char *acc_type,float amt,int month,int day,int year)
{
    info *new_acc, *p;
    new_acc = (info *)malloc (sizeof(info));
    new_acc->acc_no= cust_id;
    strcpy (new_acc->name, name);
    strcpy(new_acc->address,address);
    strcpy(new_acc->acc_type,acc_type);
    new_acc-> age=age, phone=phone, amt=amt, month=month, day=day, year=year;
    

    if(acc==NULL)
    {
        free(new_acc);
        return NO_EXISTING_ACC;
    }
    else
    {
         p=acc;
        while (p->nt !=NULL)
        {
             p=p->nt;
        }
        p->nt = new_acc;
        return SUCCESS;
}
}
