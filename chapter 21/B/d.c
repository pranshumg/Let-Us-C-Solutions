#include <stdio.h>

int main() {
    unsigned char num;
    printf("Enter 8-bit number: ");
    scanf("%hhu", &num);
    if (num & (1 << 2)) printf("3rd bit is ON\n");
    if (num & (1 << 5)) printf("6th bit is ON\n");
    if (num & (1 << 6)) printf("7th bit is ON\n");
    return 0;
}
