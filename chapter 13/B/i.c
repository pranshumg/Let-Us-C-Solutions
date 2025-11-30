#include <stdio.h>
#include <math.h>

int main() {
  float x[10], y[10];
  printf("Enter coordinates (x, y) of 10 points: \n");
  for (int i = 0; i < 10; i++) {
    scanf("%f %f", &x[i], &y[i]);
  }
  float distance = 0;
  for (int i = 1; i < 10; i++) {
    float d_x = x[i] - x[i - 1], d_y = y[i] - y[i - 1];
    distance += sqrt(d_x * d_x + d_y * d_y);
  }
  printf("Sum of distances between consecutive points: %f\n", distance);
  return 0;
}