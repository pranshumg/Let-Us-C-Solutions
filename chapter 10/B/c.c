#include <stdio.h>

void move(int n, char src, char dest, char help) {
    if (n == 1) {
        printf("%c -> %c\n", src, dest);
    } else {
        move(n - 1, src, help, dest);
        printf("%c -> %c\n", src, dest);
        move(n - 1, help, dest, src);
    }
}

int main() {
    int n = 4;
    move(n, 'A', 'C', 'B');
    
    return 0;
}
