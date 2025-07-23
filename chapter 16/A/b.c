#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool is_vowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; 
}

int main() {
    char s[81], result[81];
    printf("Enter a sentence: ");
    fgets(s, 81, stdin);
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (!is_vowel(s[i])) {
            result[j++] = s[i];
        }
    }
    result[j] = '\0';
    printf("Sentence without vowels: %s\n", result);
    return 0;
}