#ifndef ATM_H
#define ATM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 100
#define MAX_NAME 50

typedef struct {
    int acc_no;
    char name[MAX_NAME];
    float balance;
    int pin;
} Account;

extern Account accounts[MAX_ACCOUNTS];
extern int num_accounts;

// Function prototypes
void load_accounts();
void save_accounts();
void create_account();
int login(int *acc_no);
void check_balance(int acc_no);
void deposit(int acc_no);
void withdraw(int acc_no);
void display_menu();

#endif