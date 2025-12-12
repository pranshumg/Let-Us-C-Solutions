#include <stdio.h>

int main() {
    int a1[6][6], a2[6][6], sum[6][6];
    printf("enter elements of 6x6 matrix 1: \n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &a1[i][j]);
        }
    }
    printf("\nenter elements of 6x6 matrix 2: \n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &a2[i][j]);
        }
    }
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            sum[i][j] = a1[i][j] + a2[i][j];
        }
    }
    printf("Sum of two matrices: \n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}