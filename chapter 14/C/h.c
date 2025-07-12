#include <stdio.h>

void left_shift_by_two(int a[], int n) {
    int temp[2];
    temp[0] = a[0];
    temp[1] = a[1];
    for (int i = 0; i < n - 2; i++) {
        a[i] = a[i + 2];
    }
    a[n - 2] = temp[0];
    a[n - 1] = temp[1];
}

void shift_matrix_rows(int r, int c, int a[][c]) {
    for (int i = 0; i < r; i++) {
        left_shift_by_two(a[i], c);
    }
}

void print_matrix(int r, int c, int a[][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[4][5] = {
        {15, 30, 28, 19, 61},
        {1,  2,  3,  4,  5},
        {10, 20, 30, 40, 50},
        {7,  8,  9,  10, 11}
    };
    printf("Original Matrix:\n");
    print_matrix(4, 5, a);
    shift_matrix_rows(4, 5, a);
    printf("\nMatrix after shifting rows left by 2:\n");
    print_matrix(4, 5, a);
    return 0;
}