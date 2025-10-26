#include "atm.h"

Account accounts[MAX_ACCOUNTS];
int num_accounts = 0;

void load_accounts() {
    FILE *fp = fopen("accounts.txt", "r");
    if (fp == NULL) {
        return; // No file yet
    }
    char line[200];
    while (fgets(line, sizeof(line), fp) && num_accounts < MAX_ACCOUNTS) {
        sscanf(line, "%d,%49[^,],%f,%d", &accounts[num_accounts].acc_no, accounts[num_accounts].name, &accounts[num_accounts].balance, &accounts[num_accounts].pin);
        num_accounts++;
    }
    fclose(fp);
}

void save_accounts() {
    FILE *fp = fopen("accounts.txt", "w");
    if (fp == NULL) {
        printf("Error saving accounts.\n");
        return;
    }
    for (int i = 0; i < num_accounts; i++) {
        fprintf(fp, "%d,%s,%.2f,%d\n", accounts[i].acc_no, accounts[i].name, accounts[i].balance, accounts[i].pin);
    }
    fclose(fp);
}

void create_account() {
    if (num_accounts >= MAX_ACCOUNTS) {
        printf("Maximum accounts reached.\n");
        return;
    }
    Account new_acc;
    new_acc.acc_no = num_accounts + 1; // Simple auto-increment
    printf("Enter name: ");
    scanf("%s", new_acc.name);
    printf("Enter PIN: ");
    scanf("%d", &new_acc.pin);
    new_acc.balance = 0.0;
    accounts[num_accounts] = new_acc;
    num_accounts++;
    save_accounts();
    printf("Account created successfully. Account No: %d\n", new_acc.acc_no);
}

int login(int *acc_no) {
    printf("Enter Account No: ");
    scanf("%d", acc_no);
    printf("Enter PIN: ");
    int pin;
    scanf("%d", &pin);
    for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].acc_no == *acc_no && accounts[i].pin == pin) {
            return 1; // Success
        }
    }
    return 0; // Fail
}

void check_balance(int acc_no) {
    for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].acc_no == acc_no) {
            printf("Balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

void deposit(int acc_no) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Invalid amount.\n");
        return;
    }
    for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].acc_no == acc_no) {
            accounts[i].balance += amount;
            save_accounts();
            printf("Deposit successful. New balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

void withdraw(int acc_no) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Invalid amount.\n");
        return;
    }
    for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].acc_no == acc_no) {
            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                save_accounts();
                printf("Withdrawal successful. New balance: %.2f\n", accounts[i].balance);
            } else {
                printf("Insufficient balance.\n");
            }
            return;
        }
    }
    printf("Account not found.\n");
}

void display_menu() {
    printf("\nATM Banking System\n");
    printf("1. Create Account\n");
    printf("2. Login\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
}