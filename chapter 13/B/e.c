#include <stdio.h>

void modify(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] *= 3;
    }
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    modify(a, 10);
    printf("Modified array : ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}