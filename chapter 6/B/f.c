#include <stdio.h>

int main() {
	float pop = 100000, pop_at_end;

	for (int i = 1; i <= 10; i++) {
		pop_at_end = pop - pop * 0.1;
		printf("%d year : %.2f\n", i, pop_at_end);
		pop = pop_at_end;
	}

	return 0;
}