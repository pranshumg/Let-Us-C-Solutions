#include <stdio.h>

struct student {
    int roll_no;
    char name[30];
    char department[30];
    char course[30];
    int year;
};

void print_students_by_year(struct student s[], int n, int y) {
    printf("students who joined in %d:\n", y);
    for (int i = 0; i < n; i++) {
        if (s[i].year == y) {
            printf("%s\n", s[i].name);
        } 
    }
}

void print_data_by_roll_no(struct student s[], int n, int roll) {
    for (int i = 0; i < n; i++) {
        if (s[i].roll_no == roll) {
            printf("%d %s %s %s %d\n",s[i].roll_no, s[i].name, s[i].department, s[i].course, s[i].year);
            return;
        }
    }
    printf("student not found.\n");
}