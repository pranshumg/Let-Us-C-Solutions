#include <stdio.h>

int main() {
	int y;
	printf("enter year: ");
	scanf("%d", &y);

	(y % 4 == 0 && y % 100 != 0) || y % 400 == 0 ? printf("%d is a leap year\n", y) : printf("%d is not a leap year\n", y);

	return 0;
}