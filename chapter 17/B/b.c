#include <stdio.h>

struct customer {
    int account_number;
    char name[30];
    int balance;
};

void print_low_balance(struct customer c[], int n) {
    for (int i = 0; i < n; i++) {
        if (c[i].balance < 1000) {
            printf("%d %s\n", c[i].account_number, c[i].name);
        }
    }
}

void transaction(struct customer c[], int n, int acc_no, int amount, int code) {
    for (int i = 0; i < n; i++) {
        if (c[i].account_number == acc_no) {
            if (code == 1) {
                c[i].balance += amount;
            } else {
                if (c[i].balance - amount < 1000) {
                    printf("The balance is insufficient for the specified withdrawal.\n");
                    return;
                }
                c[i].balance -= amount;
            }
            return;
        }
    }
    printf("Account not found.\n");
}