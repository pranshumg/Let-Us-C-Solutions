#include <stdio.h>

int main() {
    unsigned int x;
    printf("Enter 16-bit unsigned integer: ");
    scanf("%u", &x);
    unsigned int swapped = (x >> 8) | (x << 8);
    printf("After swapping bytes: %u\n", swapped);
    return 0;
}