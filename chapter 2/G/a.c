#include <stdio.h>

int main() {
    int n;
    printf("Enter a five-digit number: ");
    scanf("%d", &n);

    int sum = 0, og_n = n;
    while (n != 0) {
        int d = n % 10;
        sum += d;
        n /= 10;
    }

    printf("Sum of digits of %d: %d\n", og_n, sum);

    return 0;
}