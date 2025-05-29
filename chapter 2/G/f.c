#include <stdio.h>

int main() {
	float C, D;
	printf("C: ");
	scanf("%f", &C);
	printf("D: ");
	scanf("%f", &D);

	float E;
	E = D;
	D = C;
	C = E;

	printf("After interchanging,\n");
	printf("C: %f\n", C);
	printf("D: %f\n", D);

	return 0;
}