#include <stdio.h>
#include <math.h>
#define pi 3.14159265359

int main() {
    float d, r;
    printf("enter value of angle in degree: ");
    scanf("%f", &d);

    r = d * (pi / 180.0);

    float s = pow(sin(r), 2);
    float c = pow(cos(r), 2);

    if (fabs(s + c - 1.0) < 1e-6) {
        printf("sum of squares of sine and cosine is equal to 1\n");
    } else {
        printf("sum of squares of sine and cosine is not equal to 1\n");
    }

    return 0;
}