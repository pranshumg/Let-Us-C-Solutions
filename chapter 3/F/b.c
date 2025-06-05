#include <stdio.h>

int main() {
	int age1, age2, age3;
	printf("enter ram's age: ");
	scanf("%d", &age1);
	printf("enter shyam's age: ");
	scanf("%d", &age2);
	printf("enter ajay's age: ");
	scanf("%d", &age3);

	if (age1 < age2 && age1 < age3) {
		printf("ram is youngest");
	} else if (age2 < age1 && age2 < age3) {
		printf("shyam is youngest");
	} else {
		printf("ajay is youngest");
	}
	
	return 0;
}