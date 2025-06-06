#include <stdio.h>

int main() {
	float h, cc, ts; 
	printf("enter hardness: ");
	scanf("%f", &h);
	printf("enter carbon content: ");
	scanf("%f", &cc);
	printf("enter tensile stength: ");
	scanf("%f", &ts);

	if (h > 50 && cc < 0.7 && ts > 5600) {
		printf("Grade is 10\n");
	} else if (h > 50 && cc < 0.7 && !(ts > 5600)) {
		printf("Grade is 9\n");
	} else if (!(h > 50) && cc < 0.7 && ts > 5600) {
		printf("Grade is 8\n");
	} else if (h > 50 && !(cc < 0.7) && ts > 5600) {
		printf("Grade is 7\n");
	} else if (h > 50 || cc < 0.7 || ts > 5600) {
		printf("Grade is 6\n");
	} else {
		printf("Grade is 5\n");
	}

	return 0;
}