#include <stdio.h>

void sum_of_first_25_nums(int *sum, int n) {
    if (n == 0) {
        return;
    } else {
        *sum += n;
        sum_of_first_25_nums(sum, n - 1);
    }
}

int main() {
    int n = 25, sum = 0;

    sum_of_first_25_nums(&sum, n);

    printf("Sum of the first 25 natural numbers: %d\n", sum);

    return 0;
}
