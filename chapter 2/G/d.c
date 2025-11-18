#include <stdio.h>
#include <math.h>

int main() {
	double t, v; 
	printf("enter temperature in fahrenheit: ");
	scanf("%lf", &t);
	printf("enter wind velocity in miles per hour: ");
	scanf("%lf", &v);
	double wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
	printf("wind-chill factor: %.2lf", wcf);
	return 0;
}