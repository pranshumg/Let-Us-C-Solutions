#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    FILE *fout = fopen("merged.txt", "w");
    char line1[256], line2[256];
    if (!f1 || !f2 || !fout) {
        printf("File error.\n");
        return 1;
    }
    while (fgets(line1, sizeof(line1), f1) && fgets(line2, sizeof(line2), f2)) {
        fputs(line1, fout);
        fputs(line2, fout);
    }
    while (fgets(line1, sizeof(line1), f1)) {
        fputs(line1, fout);
    }
    while (fgets(line2, sizeof(line2), f2)) {
        fputs(line2, fout);
    }
    fclose(f1); fclose(f2); fclose(fout);
    return 0;
}
