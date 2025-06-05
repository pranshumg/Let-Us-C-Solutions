#include <stdio.h>

int main() {
	float x1, x2, x3, y1, y2, y3;
	printf("enter x co-ordinate of 1st point: ");
	scanf("%f", &x1);
	printf("enter y co-ordinate of 1st point: ");
	scanf("%f", &y1);
	printf("enter x co-ordinate of 2nd point: ");
	scanf("%f", &x2);
	printf("enter y co-ordinate of 2nd point: ");
	scanf("%f", &y2);
	printf("enter x co-ordinate of 3rd point: ");
	scanf("%f", &x3);
	printf("enter y co-ordinate of 3rd point: ");
	scanf("%f", &y3);

	if ((y2 - y1) / (x2 - x1) == (y3 - y2) / (x3 - x2)) {
		printf("all the three points fall on one straight line.\n");
	} else {
		printf("all the three points does not fall on one straight line.\n");
	}

	return 0;
}