#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool is_vowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; 
}

int main() {
    char s[201];
    printf("Enter a sentence: ");
    fgets(s, 201, stdin);
    int cnt = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (is_vowel(s[i]) && is_vowel(s[i + 1])) {
            cnt++;
        }
    }
    printf("Successive vowel: %d\n", cnt);
    return 0;
}