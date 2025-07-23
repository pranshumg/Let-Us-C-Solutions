#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[201], word[201];
    printf("Enter a sentence: ");
    fgets(s, 201, stdin);
    int i = 0, j = 0, k = 0;
    while (s[i]) {
        if (isspace(s[i]) || s[i] == '\0') {
            word[k] = '\0';
            if (strcmp(word, "the") != 0 && strcmp(word, "The") != 0) {
                printf("%s ", word);
            }
            k = 0;
        } else {
            word[k++] = s[i];
        }
        i++;
    }   
    return 0;
}