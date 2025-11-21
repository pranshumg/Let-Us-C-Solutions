#include <stdio.h>

int main() {
	char c = (char)0;
	int n = 0;
	while (n <= 255) {
		printf("%c - %d\n", c, n);
		c++;
		n++;
	}
	return 0;
}