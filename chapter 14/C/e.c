#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("enter elements of %dx%d matrix: \n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    bool is_symmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                is_symmetric = false;
                break;
            } 
        }
        if (!is_symmetric) {
            break;
        }
    }
    if (is_symmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}