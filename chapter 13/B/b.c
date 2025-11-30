#include <stdio.h>
#include <stdbool.h>

int main() {
  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter %d integers: ", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  bool is_reverse = true;
  int start = 0, end = n - 1;
  while (start < end) {
    if (a[start++] != a[end--]) {
      is_reverse = false;
      break;
    }
  }
  if (is_reverse) {
    printf("Pattern matched.\n");
  } else {
    printf("Pattern not matched.\n");
  }
  return 0;
}