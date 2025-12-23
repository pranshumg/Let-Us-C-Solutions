#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("names.txt", "w+");
    int n;
    char name[30];
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        fprintf(fp, "%s\n", name);
    }
    int pos;
    printf("Enter n to display nth name: ");
    scanf("%d", &pos);
    rewind(fp);
    for (int i = 1; i <= pos; i++) {
        fgets(name, 30, fp);
    }
    printf("Name at position %d: %s", pos, name);
    fclose(fp);
    return 0;
}