#include <stdio.h>

int main() {
	for (int h = 0; h <= 23; h++) {
		if (h == 0) {
			printf("12 midnight\n");
		} else if (h < 12) {
			printf("%d:00 AM\n", h);
		} else if (h == 12) {
			printf("%d noon\n", h);
		} else if (h > 12) {
			printf("%d:00 PM\n", h - 12);
		}
	}

	return 0;
}