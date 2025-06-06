#include <stdio.h>

int main() {
	int i;
	printf("enter an integer: ");
	scanf("%d", &i);

	printf("octal equivalent of %d is: %o\n", i, i);

	return 0;
}