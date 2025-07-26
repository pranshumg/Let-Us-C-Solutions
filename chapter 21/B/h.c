#include <stdio.h>

int main() {
    unsigned char x;
    printf("Enter an 8-bit number: ");
    scanf("%hhu", &x);
    if (x & (1 << 2)) x &= ~(1 << 2);  // Clear 3rd bit
    if (x & (1 << 4)) x &= ~(1 << 4);  // Clear 5th bit
    printf("After clearing 3rd and 5th bits if they were on: %hhu\n", x);
    return 0;
}
