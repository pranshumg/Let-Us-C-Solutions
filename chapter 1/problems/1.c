#include <stdio.h>

int main() {
	float bs, da, hra, gs; 
	printf("enter basic salary: ");
	scanf("%f", &bs);

	da = 0.4 * bs;
	hra = 0.2 * bs;
	gs = da + hra + bs;

	printf("dearness allowance: %.2f\n", da);
	printf("house rental allowance: %.2f\n", hra);
	printf("gross salary: %.2f\n", gs);

	return 0;
}
