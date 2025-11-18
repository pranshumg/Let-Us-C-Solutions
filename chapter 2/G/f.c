#include <stdio.h>

int main() {
	double C, D;
	printf("C: ");
	scanf("%lf", &C);
	printf("D: ");
	scanf("%lf", &D);
	double E;
	E = D;
	D = C;
	C = E;
	printf("After interchanging,\n");
	printf("C: %lf\n", C);
	printf("D: %lf\n", D);
	return 0;
}