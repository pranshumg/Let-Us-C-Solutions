#include <stdio.h>

int main() {
	float m1, m2, m3, m4, m5, aggr, perc; 
	printf("enter 1st subject marks: ");
	scanf("%f", &m1);
	printf("enter 2nd subject marks: ");
	scanf("%f", &m2);
	printf("enter 3rd subject marks: ");
	scanf("%f", &m3);
	printf("enter 4th subject marks: ");
	scanf("%f", &m4);
	printf("enter 5th subject marks: ");
	scanf("%f", &m5);

	aggr = (m1 + m2 + m3 + m4 + m5);
	perc = aggr/5;

	printf("aggregate marks: %.2f\n", aggr);
	printf("percentage marks: %.2f\n", perc);

	return 0;
}