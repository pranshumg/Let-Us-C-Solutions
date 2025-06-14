#include <stdio.h>

void dec_to_bin(int *b, int n, int c) {
    if (n == 0) {
        return;
    } else {
        int rem = n % 2;
        *b = *b + rem * c;
        c *= 10;
        n /= 2;
        dec_to_bin(b, n, c);
    }
}

int main() {
    int n, b = 0, c = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    dec_to_bin(&b, n, c);

    printf("Binary equivalent of %d: %d\n", n, b);

    return 0;
}
