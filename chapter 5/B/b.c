#include <stdio.h>
#include <math.h>

int main() {
	int a = 1, m, ld;

	while (a <= 500) {
		int sum = 0, count = 0;
		m = a;
		while (m != 0) {
			m /= 10;
			count++;
		}

		m = a;
		while (m != 0) {
			ld = m % 10;
			sum = sum + pow(ld, count);
			m /= 10;
		}
		if (a == sum) {
			printf("%d\n", a);
		}
		a++;
	}

	return 0;
}