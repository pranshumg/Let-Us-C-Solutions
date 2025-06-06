#include <stdio.h>

int main() {
	int n, nums, max, min;
	printf("how many numbers you want to enter: ");
	scanf("%d", &nums);

	printf("enter number: ");
	scanf("%d", &n);

	max = min = n;

	int i = 2;
	while (i <= nums) {
		printf("enter number: ");
		scanf("%d", &n);

		if (n > max) {
			max = n;
		} else if (n < min) {
			min = n;
		}
		i++;
	}

	int range = max - min; 
	printf("Range: %d - %d = %d\n", max, min, range);

	return 0;
}