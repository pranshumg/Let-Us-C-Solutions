#include <stdio.h>

int main() {
	int num;
	printf("enter number: ");
	scanf("%d", &num);
	int og_num = num;

	if (num == 0) {
		printf("absolute value of 0 is 0");
	} else if (num > 0) {
		printf("absolute value of %d is %d\n", og_num, num);
	} else {
		num = -num;
		printf("absolute value of %d is %d\n", og_num, num);
	}

	return 0;
}