#include "atm.h"

int main() {
    load_accounts();
    int choice;
    while (1) {
        display_menu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                create_account();
                break;
            case 2: {
                int acc_no;
                if (login(&acc_no)) {
                    printf("Login successful.\n");
                    int logged_in = 1;
                    while (logged_in) {
                        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Logout\nEnter choice: ");
                        int sub_choice;
                        scanf("%d", &sub_choice);
                        switch (sub_choice) {
                            case 1:
                                check_balance(acc_no);
                                break;
                            case 2:
                                deposit(acc_no);
                                break;
                            case 3:
                                withdraw(acc_no);
                                break;
                            case 4:
                                logged_in = 0;
                                printf("Logged out.\n");
                                break;
                            default:
                                printf("Invalid choice.\n");
                        }
                    }
                } else {
                    printf("Invalid credentials.\n");
                }
                break;
            }
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}