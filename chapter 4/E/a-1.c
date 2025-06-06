#include <stdio.h>

int main() {
	char ch;
	printf("enter character: ");
	scanf("%c", &ch);

	ch >= 97 && ch <= 122 ? printf("%c is a lowercase alphabet\n", ch) : printf("%c is not a lowercase alphabet\n", ch);

	return 0;
}