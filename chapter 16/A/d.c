#include <stdio.h>

int main() {
    char f[100], m[100], l[100];
    printf("Enter full name: ");
    scanf("%s %s %s", f, m, l);
    printf("Abbreviated: %c.%c.%s\n", f[0], m[0], l);
    return 0;
}