#include <stdio.h>
#include <math.h>

int main() {
    int a[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    int n = sizeof(a) / sizeof(int);
    float mean, std_dev = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    mean = sum / n;
    for (int i = 0; i < n; i++) {
        std_dev += pow(a[i] - mean, 2);
    }
    std_dev = sqrt(std_dev / n);
    printf("Mean: %f\nStandard Deviation: %f\n", mean, std_dev);
    return 0;
}