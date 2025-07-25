#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("target.txt", "w");
    if (!src || !dest) {
        printf("Error opening file.\n");
        return 1;
    }
    char c;
    while ((c = fgetc(src)) != EOF) {
        fputc(toupper(c), dest);
    }
    fclose(src);
    fclose(dest);
    return 0;
}
