#include <stdio.h>

int main() {
    int a[3][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        },
        {
            {13, 14, 15},
            {16, 17, 18}
        }
    };
    // first element
    printf("%d\n", a[0][0][0]);
    // last element
    printf("%d\n", a[2][1][2]);
    return 0;
}