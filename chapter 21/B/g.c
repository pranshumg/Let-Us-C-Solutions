#include <stdio.h>

int main() {
    unsigned char x;
    printf("Enter an 8-bit number: ");
    scanf("%hhu", &x);
    x |= 0xAA; // 10101010 in binary, sets odd bits to 1
    printf("After setting odd bits: %hhu\n", x);
    return 0;
}
