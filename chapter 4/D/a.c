#include <stdio.h>

int main() {
	int a, b, c;
	printf("enter 1st side of triangle: ");
	scanf("%d", &a);
	printf("enter 2nd side of triangle: ");
	scanf("%d", &b);
	printf("enter 3rd side of triangle: ");
	scanf("%d", &c);

	if (a == b && b == c) {
		printf("triangle is equilateral.\n");
	} else {
		printf("triangle is not equilateral.\n");
	}

	if (a == b || b == c || c == a) {
		printf("triangle is isosceles.\n");
	} else {
		printf("triangle is not isosceles.\n");
	}

	if (a != b && b != c && c != a) {
		printf("triangle is scalene.\n");
	} else {
		printf("triangle is not scalene.\n");
	}

	if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b)) {
		printf("triangle is an right-angled triangle.\n");
	} else {
		printf("triangle is not an right-angled triangle.\n");
	}

	return 0;
}