#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char c[17];
    printf("enter 16-digit Credit Card number: ");
    scanf("%s", c);
    if (strlen(c) != 16) {
        printf("Invalid input length.\n");
        return 1;
    }
    int sum = 0;
    for (int i = 15; i >= 0; i--) {
        int digit = c[i] - '0';
        if (!isdigit(c[i])) {
            printf("Invalid character in card number.\n");
            return 1;
        }
        if (i % 2 == 0) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
    }
    if (sum % 10 == 0) {
        printf("Valid credit card.\n");
    } else {
        printf("Invalid credit card.\n");
    }
    return 0;
}