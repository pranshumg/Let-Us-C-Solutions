#include <stdio.h>

int main() {
    char c[11];
    printf("Enter 10-digit ISBN (last digit can be X): ");
    scanf("%s", c);
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        int digit;
        if (i == 9 && (c[i] == 'X' || c[i] == 'x')) {
            digit = 10;
        } else if (c[i] >= '0' && c[i] <= '9') {
            digit = c[i] - '0';
        } else {
            printf("Invalid characters.\n");
            return 1;
        }
        sum += (i + 1) * digit;
    }
    if (sum % 11 == 0) {
        printf("Valid ISBN.\n");
    } else {
        printf("Invalid ISBN.\n");
    }
    return 0;
}