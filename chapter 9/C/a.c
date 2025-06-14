#include <stdio.h>

void shift_right(int *x, int *y, int *z) {
    int temp = *x;
    *x = *z;
    *z = *y;
    *y = temp;
}

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("After circularly shifting right:\n");
    shift_right(&x, &y, &z);
    printf("y = %d, z = %d, x = %d\n", y, z, x);

    return 0;
}
