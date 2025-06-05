#include <stdio.h>

int main() {
    int x, y;
    printf("enter x co-ordinate of point: ");
    scanf("%d", &x);
    printf("enter y co-ordinate of point: ");
    scanf("%d", &y);

    if (x == 0) {
        printf("the point lies on y-axis.\n");
    } else {
        printf("the point lies on x-axis.\n");
    }
    
    return 0;
}