#include <stdio.h>
#include <math.h>

int main() {
	float L1, L2, G1, G2;
	printf("enter value of latitude in degrees of first place: ");
	scanf("%f", &L1);
	printf("enter value of longitude in degrees of first place: ");
	scanf("%f", &G1);
	printf("enter value of latitude in degrees of second place: ");
	scanf("%f", &L2);
	printf("enter value of longitude in degrees of second place: ");
	scanf("%", &G2);

	float nm = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));
	printf("distance between them in nauticlal miles is: %.2f", nm);

	return 0;
}