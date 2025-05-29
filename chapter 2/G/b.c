#include <stdio.h>
#include <math.h>

int main() {
	int x, y;
	printf("enter x co-ordinate: ");
	scanf("%d", &x);
	printf("enter y co-ordinate: ");
	scanf("%d", &y);

	float r = sqrt(x * x + y * y);
	float phi = atan(y / x);

	printf("polar co-ordinates of (%d,%d) is: (%.2f,%.2f)", x, y, r, phi);

	float pi = 3.1415, degree = phi * (180 / pi);
	printf("\npolar co-ordinates of (%d,%d) in degree is: (%.2f,%.2f)", x, y, r, degree);

	return 0;
}
