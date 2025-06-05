#include <stdio.h>

int main() {
	int num, d5, d4, d3, d2, d1;
	printf("enter a five-digit number: ");
	scanf("%d", &num);
	int og_num = num;

	int rev_num = 0;
	while (num > 0) {
		int d = num % 10;
		rev_num = rev_num * 10 + d;
		num /= 10;
	}

	printf("reversed number: %d\n", rev_num);
	
	if (rev_num == og_num) {
		printf("original and reversed numbers are equal.\n");
	} else {
		printf("original and reversed numbers are not equal.\n");
	}

	return 0;
}