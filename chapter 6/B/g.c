#include <stdio.h>

int main() {
	int num = 50000, count;
	for (int i = 1; i <= num; i++) {
		count = 0;
		for (int j = 1; j * j * j < i; j++) {
			for (int k = j; (j * j * j) + (k * k * k) <= i; k++) {
				if ((j * j * j) + (k * k * k) == i) {
					count++;
				}
			}
		}
		if (count == 2) {
			printf("%d\n", i);
		}
	}

	return 0;

} 