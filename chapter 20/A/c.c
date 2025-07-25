#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: change <old_word> <new_word> <filename>\n");
        return 1;
    }
    char *old_word = argv[1];
    char *new_word = argv[2];
    char *filename = argv[3];
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("Cannot open file %s\n", filename);
        return 1;
    }
    FILE *temp = fopen("temp.txt", "w");
    if (!temp) {
        printf("Cannot create temporary file\n");
        return 1;
    }
    char word[100];
    while (fscanf(fp, "%s", word) != EOF) {
        if (strcmp(word, old_word) == 0)
            fprintf(temp, "%s ", new_word);
        else
            fprintf(temp, "%s ", word);
    }
    fclose(fp);
    fclose(temp);
    remove(filename);
    rename("temp.txt", filename);
    printf("Replacement done.\n");
    return 0;
}
