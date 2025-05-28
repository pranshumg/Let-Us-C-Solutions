#include <stdio.h>

int main() {
	float km, m, ft, inch, cm;
	printf("enter distance in kilometers: ");
	scanf("%f", &km);

	m = km * 1000;
	ft = km * 3280.84;
	inch = km * 39370.1;
	cm = km * 100000;

	printf("distance in  meters  %.2f\n", m);
	printf("distance in  feets: %.2f\n", ft);
	printf("distance in  inches: %.2f\n", inch);
	printf("distance in  centimeters: %.2f\n", cm);

	return 0;
}