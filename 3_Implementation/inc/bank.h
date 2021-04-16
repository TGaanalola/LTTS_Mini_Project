
#ifndef __BANK_H__
#define __BANK_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum user{
    SUCCESS = 0,
    NO_EXISTING_ACC=2,
    EXISTS=6
}user;

typedef struct info{
    char name[40];
    int acc_no;
    int age;
    char address[40];
    int phone;
    char acc_type[10];
    float amt;
    int month;
    int day;
    int year;
    struct info *nt;
}info;


info *newacc(info *,char *,int,int,char *,int,char *,float,int,int,int);

user add(info *,char *,int ,int ,char *,int ,char *,float ,int ,int ,int );

user deposit(float,info *,info *,int *);

user withdraw(info *,float,info *,int *);

#endif
