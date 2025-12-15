#include <stdio.h>

#define MAX 5

struct employee {
    int code;
    char name[30];
    int day;
    int month;
    int year;
};

void show_employees(struct employee e[], int n, int d, int m, int y) {
    for (int i = 0; i < n; i++) {
        if (y - e[i].year > 3 || (y - e[i].year == 3 && (m > e[i].month || (d >= e[i].day && m == e[i].month)))) {
            printf("%s\n", e[i].name);
        }
    }
}

int main() {
    struct employee e[MAX];
    printf("Enter data for %d employees:\n", MAX);
    for (int i = 0; i < MAX; i++) {
        printf("Employee %d:\n", i + 1);
        printf("\nCode:\n");
        scanf("%d", &e[i].code);
        printf("Name:\n");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        printf("Joining Date:\n");
        scanf("%d %d %d", &e[i].day, &e[i].month, &e[i].year);
    }
    int d, m, y;
    printf("\nEnter current date:\n");
    scanf("%d %d %d", d, m, y);
    show_employees(e, MAX, d, m, y);
    return 0;
}