#include <stdio.h>
#include <math.h>

void prime_factors(int num) {
    while (num % 2 == 0) {
        printf("%d ", 2);
        num /= 2;
    }

    for (int i = 3; i <= sqrt(num); i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    if (num > 2) {
        printf("%d", num);
    }
}

int main() {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);

    printf("prime factors of %d: ", num);
    prime_factors(num);

    return 0;
}
