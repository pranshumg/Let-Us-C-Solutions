#include <stdio.h>

int main() {
    int a[25], *ptr, min;
    printf("Enter 25 integers: ");
    for (int i = 0; i < 25; i++) {
        scanf("%d", &a[i]);
    }
    ptr = a, min = *ptr;
    for (int i = 1; i < 25; i++) {
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }
    printf("Smallest number: %d\n", min);
    return 0;
}