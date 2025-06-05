#include <stdio.h>
#include <math.h>

int main() {
	int h, k, x, y;
	float r;
	printf("enter x co-ordinate of center of circle: ");
	scanf("%d", &h);
	printf("enter y co-ordinate of center of circle: ");
	scanf("%d", &k);
	printf("enter radius of circle: ");
	scanf("%d", &r);
	printf("enter x co-ordinate of point: ");
	scanf("%d", &x);
	printf("enter y co-ordinate of point: ");
	scanf("%d", &y);

	float d = sqrt(pow(x - h, 2) + pow(y - k, 2));
	printf("distance between the point and the center of circle: %.2f\n", d);

	if (d < r) {
		printf("the point lies inside the circle.\n");
	} else if (d == r) {
		printf("the point lies on the circle.\n");
	} else {
		printf("the point lies outside the circle.\n");
	}

	return 0;
}