#include <stdio.h>
#include <math.h>

int main() {
    float x, y, z, sum = 0.0;
    printf("enter a number: ");
    scanf("%f", &x);

    y = (x - 1) / x;

    for (int i = 2; i <= 7; i++) {
        z = 0.5 * pow(y, i);
        sum = sum + z;
    }

    printf("sum of first seven terms of this series: %.2f\n", y + sum);

    return 0;
}