#include <stdio.h>

int main() {
    int a[25], pos = 0, neg = 0, even = 0, odd = 0;
    printf("Enter 25 integers: ");
    for (int i = 0; i < 25; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0) {
            pos++;
        } else if (a[i] < 0) {
            neg++;
        }
        if (a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Postive: %d\nNegative: %d\nEven: %d\nOdd: %d\n", pos, neg, even, odd);
    return 0;
}