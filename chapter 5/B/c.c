#include <stdio.h>

int main() {
	int ms = 21, uc, cc; 

	while (ms >= 1) {
		printf("total matchsticks : %d\n", ms);
		printf("pick matchsticks (1 to 4) : ");
		scanf("%d", &uc);

		if (uc < 1 && uc > 4) {
			printf("wrong input");
			break;
		}

		cc = 5 - uc;

		printf("computer picks %d matchsticks\n", cc);

		ms = ms - uc - cc;

		if (ms == 1) {
			printf("you have lost via computer.\n");
			break;
		}
	}
	
	return 0;
}