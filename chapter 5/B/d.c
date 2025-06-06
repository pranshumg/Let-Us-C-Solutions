#include <stdio.h>

int main() {
	int n, pos = 0, neg = 0, z = 0; 
	char ch;
	
	do {
		printf("enter a number: ");
		scanf("%d", &n);

		if (n > 0) {
			pos++;
		} else if (n < 0) {
			neg++;
		} else {
			z++;
		}

		printf("do you still want to continue (Y / N): ");
		scanf(" %c", &ch);

	} while (ch == 'Y' || ch == 'y');

	printf("postive numbers: %d\nnegative numbers: %d\nzeros: %d\n", pos, neg, z);

	return 0;
}