#include <stdio.h>

void weight_convert(float *grams, float *tons, float *pounds) {
    float kg;
    printf("Enter weight of commodity in kilograms: ");
    scanf("%f", &kg);

    *grams = kg * 1000;
    *tons = kg / 1000;
    *pounds = kg * 2.20462;
}

int main() {
    float grams, tons, pounds;

    weight_convert(&grams, &tons, &pounds);

    printf("Weight of commodity in grams: %.2f g\n", grams);
    printf("Weight of commodity in metric tons: %.6f tons\n", tons);
    printf("Weight of commodity in pounds: %.2f lbs\n", pounds);

    return 0;
}
