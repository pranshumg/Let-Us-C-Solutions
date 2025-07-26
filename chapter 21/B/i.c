#include <stdio.h>

int main() {
    unsigned char x;
    printf("Enter an 8-bit number: ");
    scanf("%hhu", &x);
    if (!(x & (1 << 2))) x |= (1 << 2);  // Set 3rd bit
    if (!(x & (1 << 4))) x |= (1 << 4);  // Set 5th bit
    printf("After setting 3rd and 5th bits if they were off: %hhu\n", x);
    return 0;
}
