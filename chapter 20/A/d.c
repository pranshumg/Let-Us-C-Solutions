#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: calc <operator> <n> <m>\n");
        return 1;
    }
    char *op = argv[1];
    int n = atoi(argv[2]);
    int m = atoi(argv[3]);
    if (strcmp(op, "+") == 0) {
        printf("%d\n", n + m);
    } else if (strcmp(op, "-") == 0) {
        printf("%d\n", n - m);
    } else if (strcmp(op, "*") == 0) {
        printf("%d\n", n * m);
    } else if (strcmp(op, "/") == 0) {
        if (m != 0) {
            printf("%d\n", n / m);
        } else {
            printf("Division by zero error\n");
        }
    } else if (strcmp(op, "==") == 0) {
        printf("%s\n", n == m ? "True" : "False");
    } else if (strcmp(op, ">") == 0) {
        printf("%s\n", n > m ? "True" : "False");
    } else if (strcmp(op, "<") == 0) {
        printf("%s\n", n < m ? "True" : "False");
    } else {
        printf("Invalid operator\n");
    }
    return 0;
}