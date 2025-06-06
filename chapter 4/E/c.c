#include <stdio.h>

int main() {
	float a, b, c;
	printf("enter 1st number: ");
	scanf("%f", &a);
	printf("enter 2nd number: ");
	scanf("%f", &b);
	printf("enter 3rd number: ");
	scanf("%f", &c);

	(a > b ? (a > c ? printf("%.2f is greatest\n", a) : printf("%.2f is greatest\n", c)) : (b > c ? printf("%.2f is greatest\n", b) : printf("%.2f is greatest\n", c)));

	return 0;
}