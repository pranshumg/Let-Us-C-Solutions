#include <stdio.h>

int main() {
	char ch;
	printf("enter character: ");
	scanf("%c", &ch);

	(ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) && (ch >= 123 && ch <= 127) ? printf("%c is a special symbol\n", ch) : printf("%c is not a special symbol\n", ch);

	return 0;
}