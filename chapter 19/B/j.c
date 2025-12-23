#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_target(char *word) {
    return strcmp(word, "a") == 0 || strcmp(word, "an") == 0 || strcmp(word, "the") == 0;
}

int main() {
    FILE *fin = fopen("text.txt", "r");
    FILE *fout = fopen("cleaned.txt", "w");
    char word[100];
    while (fscanf(fin, "%s", word) != EOF) {
        if (!is_target(word)) {
            fprintf(fout, "%s ", word);
        }
    }
    fclose(fin);
    fclose(fout);
    return 0;
}