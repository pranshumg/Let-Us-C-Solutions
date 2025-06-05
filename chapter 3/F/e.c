#include <stdio.h>

int main() {
    float l, b, ar, per; 
    printf("enter length of rectangle: ");
    scanf("%f", &l);
    printf("enter breadth of rectangle: ");
    scanf("%f", &b);

    ar = l * b;
    per = 2 * (l + b);
    printf("area of rectangle: %.2f\n", ar);
    printf("perimeter of rectangle: %.2f\n", per);

    if (ar > per) {
        printf("area of rectangle is greater than its perimter.\n");
    } else if (ar == per) {
        printf("area of rectangle is equal to its perimeter.\n");
    } else {
        printf("perimeter of rectangle is greater than its area.\n");
    }
    
    return 0;
}