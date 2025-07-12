#include <stdio.h>

void input(int r, int c, int a[][c]) {
    printf("Enter elements of %dx%d matrix:\n", r, c);
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &a[i][j]);
		}
	}
}

void display(int r, int c, int a[][c]) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void multiplication(int r1, int c1, int r2, int c2, int a1[r1][c1], int a2[r2][c2], int mul[r1][c2]) {
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			mul[i][j] = 0;
			for (int k = 0; k < c1; k++) {
				mul[i][j] += a1[i][k] * a2[k][j];
			}
		}
	}
}

int main() {
	int a1[10][10], a2[10][10], r1, c1, r2, c2;
	printf("Enter no. of rows and columns for matrix 1: \n");
	scanf("%d %d", &r1, &c1);
	printf("Enter no. of rows and columns for matrix 2: \n");
	scanf("%d %d", &r2, &c2);
	if (c1 == r2) {
		input(r1, c1, a1);
		input(r2, c2, a2);
		int mul[10][10];
		multiplication(r1, c1, r2, c2, a1, a2, mul);
		printf("multiplication of two matrices: \n");
		display(r1, c2, mul);
	}
	else {
		printf("\nmultiplication is not possible.\n");
	}
	return 0;
}