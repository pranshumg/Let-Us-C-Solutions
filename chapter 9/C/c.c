#include <stdio.h>
#include <math.h>

float distance(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

float triangle_area(float x1, float y1, float x2, float y2, float x3, float y3) {
    float a = distance(x1, y1, x2, y2);
    float b = distance(x2, y2, x3, y3);
    float c = distance(x3, y3, x1, y1);
    float s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int is_inside_triangle(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y) {
    float ABC = triangle_area(x1, y1, x2, y2, x3, y3);
    float PAB = triangle_area(x, y, x1, y1, x2, y2);
    float PBC = triangle_area(x, y, x2, y2, x3, y3);
    float PCA = triangle_area(x, y, x3, y3, x1, y1);

    float sum = PAB + PBC + PCA;

    if (fabs(sum - ABC) < 0.0001)
        return 1;
    else
        return 0;
}

int main() {
    float x1, y1, x2, y2, x3, y3, x, y;
    
    printf("Enter triangle vertices (x1 y1 x2 y2 x3 y3): ");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

    printf("Enter point (x y): ");
    scanf("%f %f", &x, &y);

    if (is_inside_triangle(x1, y1, x2, y2, x3, y3, x, y))
        printf("Point lies inside the triangle.\n");
    else
        printf("Point lies outside the triangle.\n");

    return 0;
}
