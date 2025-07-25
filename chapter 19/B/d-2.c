#include <stdio.h>

char substitute(char c) {
    if (c >= 'A' && c <= 'Z') return '1' + (c - 'A');
    return c;
}

int main() {
    FILE *src = fopen("plain.txt", "r");
    FILE *dest = fopen("subs.txt", "w");
    char c;
    while ((c = fgetc(src)) != EOF) {
        fputc(substitute(c), dest);
    }
    fclose(src); fclose(dest);
    return 0;
}
