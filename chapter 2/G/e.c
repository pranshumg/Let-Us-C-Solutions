#include <stdio.h>
#include <math.h>

int main() {
	float d, r, pi = 3.145; 
	printf("enter value of an angle in degree: ");
	scanf("%f", &d);

	r = d * (pi / 180);

	printf("sin(%.2f) = %.2f\n", d, sin(r));
	printf("cos(%.2f) = %.2f\n", d, cos(r));
	printf("tan(%.2f) = %.2f\n", d, tan(r));
	printf("cosec(%.2f) = %.2f\n", d, 1 / sin(r));
	printf("sec(%.2f) = %.2f\n", d, 1 / cos(r));
	printf("cot(%.2f) = %.2f\n", d, 1 / tan(r));

	return 0;
}