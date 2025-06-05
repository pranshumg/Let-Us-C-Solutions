#include <stdio.h>

int main() {
	float a1, a2, a3; 
	printf("enter 1st angle of triangle: ");
	scanf("%f", &a1);
	printf("enter 2nd angle of triangle: ");
	scanf("%f", &a2);
	printf("enter 3rd angle of triangle: ");
	scanf("%f", &a3);

	float sum = a1 + a2 + a3;
	printf("sum of angles: %.2f\n", sum);

	if (sum == 180) {
		printf("triangle is valid\n");
	} else {
		printf("triangle is not valid\n");
	}
	
	return 0;
}