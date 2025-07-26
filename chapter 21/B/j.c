#include <stdio.h>

#define _BV(bit) (1 << (bit))

void showbits(unsigned char n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n & _BV(i)) ? 1 : 0);
    }
    printf("\n");
}

int main() {
    unsigned char x;
    printf("Enter an 8-bit number: ");
    scanf("%hhu", &x);
    printf("Bits: ");
    showbits(x);
    return 0;
}
