#include <stdio.h>
#include <math.h>

int main() {
	double d, r, pi = 3.145; 
	printf("enter value of an angle in degree: ");
	scanf("%lf", &d);
	r = d * (pi / 180);
	printf("sin(%.2lf) = %.2lf\n", d, sin(r));
	printf("cos(%.2lf) = %.2lf\n", d, cos(r));
	printf("tan(%.2lf) = %.2lf\n", d, tan(r));
	printf("cosec(%.2lf) = %.2lf\n", d, 1 / sin(r));
	printf("sec(%.2lf) = %.2lf\n", d, 1 / cos(r));
	printf("cot(%.2lf) = %.2lf\n", d, 1 / tan(r));
	return 0;
}