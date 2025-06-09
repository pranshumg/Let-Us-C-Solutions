#include <stdio.h>
#include <math.h>

int main() {
	float p, n, q, r, a;
	for (int i = 1; i <= 10; i++) {
		printf("enter principal amount: ");
		scanf("%f", &p);
		printf("enter time in years: ");
		scanf("%f", &n);
		printf("enter annual rate: ");
		scanf("%f", &r);
		printf("enter number of times interest is compounded per year: ");
		scanf("%f", &q);

		a = p * pow((1 + r / q), n * q);

		printf("amount after interest: %.2f\n", a);
	}

	return 0;
}