#include <stdio.h>

int main() {	
	float l, b, r; 
	printf("enter length of rectangle: ");
	scanf("%f", &l);
	printf("enter breadth of rectangle: ");
	scanf("%f", &b);

	printf("area of rectangle: %.2f\n", l * b);
	printf("perimeter of rectangle: %.2f\n", 2 * (l + b));

	printf("\nenter radius of circle: ");
	scanf("%f", &r);

	printf("area of circle: %.2f\n", 3.14 * r * r);
	printf("circumference of circle: %.2f\n", 2 * 3.14 * r);

	return 0;
}