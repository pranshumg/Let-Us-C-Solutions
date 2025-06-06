#include <stdio.h>

int main() {
	char ch = (char)0;
	int n = 0;

	while (n <= 255) {
		printf("%c - %d\n", ch, n);
		ch++;
		n++;
	}
	
	return 0;
}