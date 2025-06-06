#include <stdio.h>

float max(float a, float b, float c) {
	if (a >= b && a >= c) {
		return a;
	} else if (b >= a && b >= c) {
		return b;
	} else {
		return c;
	}
}

int main() {
	float r, g, b;
	printf("enter value of red(0 to 255): ");
	scanf("%f", &r);
	printf("enter value of green(0 to 255): ");
	scanf("%f", &g);
	printf("enter value of blue(0 to 255): ");
	scanf("%f", &b);

	float w, c, m, y, k;
	w = max(r / 255, g / 255, b / 255);

	if (w == 0) {
		c = m = y = 0;
		k = 1;
	} else {
		c = ((w - (r / 255)) / w);
		m = ((w - (g / 255)) / w);
		y = ((w - (b / 255)) / w);
		k = 1 - w;
	}

	printf("white: %.2f\n", w);
	printf("the value of cyan is: %.2f\n", c);
	printf("the value of magenta is: %.2f\n", m);
	printf("the value of yellow is: %.2f\n", y);
	printf("the value of black is: %.2f\n", k);

	return 0;
}