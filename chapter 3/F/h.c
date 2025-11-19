#include <stdio.h>

int main() {
  int x, y;
  printf("enter x co-ordinate of point: ");
  scanf("%d", &x);
  printf("enter y co-ordinate of point: ");
  scanf("%d", &y);
  if (x == 0 && y == 0) {
    printf("the point is the origin (0, 0).\n");
  } else if (x == 0) {
    printf("the point lies on the y-axis.\n");
  } else if (y == 0) {
    printf("the point lies on the x-axis.\n");
  } else {
    printf("the point lies in a quadrant.\n");
  }
  return 0;
}