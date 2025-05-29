#include <stdio.h>
#include <math.h>

int main() {
	float t, v; 
	printf("enter temperature in fahrenheit: ");
	scanf("%f", &t);
	printf("enter wind velocity in miles per hour: ");
	scanf("%f", &v);

	float wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
	printf("wind-chill factor: %.2f", wcf);

	return 0;
}