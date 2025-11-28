#include <stdio.h>
#include "interest.h"

int main() {
  float p, r, t;
  printf("Enter Principal, Rate and Time: ");
  scanf("%f %f %f", &p, &r, &t);
  printf("Simple Interest: %f\n", simple_interest(p, r, t));
  printf("Amount: %f\n", amount(p, r, t));
  return 0;
}