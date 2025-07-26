#include <stdio.h>

int main() {
    unsigned char x;
    printf("Enter an 8-bit number (0 to 255): ");
    scanf("%hhu", &x);
    unsigned char swapped = (x >> 4) | (x << 4);
    printf("After swapping nibbles: %hhu\n", swapped);
    return 0;
}
