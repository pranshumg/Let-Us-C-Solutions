#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    int age;
};

int compare(const void *a, const void *b) {
    struct student *s1 = (struct student *)a;
    struct student *s2 = (struct student *)b;
    return strcmp(s1->name, s2->name);
}

int main() {
    FILE *fp;
    struct student s[100];
    int cnt = 0;
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    while (fscanf(fp, "%s %d", s[cnt].name, &s[cnt].age) == 2) {
        cnt++;
    }
    fclose(fp);
    qsort(s, cnt, sizeof(struct student), compare);
    printf("Sorted Student Records:\n");
    for (int i = 0; i < cnt; i++) {
        printf("Name: %s, Age: %d\n", s[i].name, s[i].age);
    }
    return 0;
}
