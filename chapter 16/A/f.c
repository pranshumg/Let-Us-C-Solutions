#include <stdio.h>

void print_word(char c) {
    switch (c) {
        case '0':
        printf("Zero ");
        break;
        case '1':
        printf("One ");
        break;
        case '2':
        printf("Two ");
        break;
        case '3':
        printf("Three ");
        break;
        case '4':
        printf("Four ");
        break;
        case '5':
        printf("Five ");
        break;
        case '6':
        printf("Six ");
        break;
        case '7':
        printf("Seven ");
        break;
        case '8':
        printf("Eight ");
        break;
        case '9':
        printf("Nine ");
        break;
    }
}

int main() {
    char s[10];
    printf("enter number (<= 9 digits): ");
    fgets(s, 10, stdin);
    for (int i = 0; s[i] != '\0'; i++) {
        print_word(s[i]);
    }
    printf("\n");
    return 0;
}