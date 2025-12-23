#include <stdio.h>

int main() {
    FILE *src = fopen("plain.txt", "r");
    FILE *dest = fopen("offset.txt", "w");
    int offset = 5; // example offset
    char c;
    while ((c = fgetc(src)) != EOF) {
        fputc(c + offset, dest);
    }
    fclose(src);
    fclose(dest);
    return 0;
}