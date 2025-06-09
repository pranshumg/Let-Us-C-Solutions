#include <stdio.h>

int main() {
	int n = 4, l = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= (n - i); j++) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++, l++) {
			printf("%d ", l);
		}	
		printf("\n");
	}

	return 0;
}