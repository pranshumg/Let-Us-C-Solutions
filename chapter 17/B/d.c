#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

struct Cricketer {
    char name[50];
    int age;
    int test_matches;
    float average_runs;
};

int compare_by_average_runs(const void *a, const void *b) {
    struct Cricketer *c1 = (struct Cricketer *)a;
    struct Cricketer *c2 = (struct Cricketer *)b;
    if (c1->average_runs > c2->average_runs) {
        return 1;
    } else if (c1->average_runs < c2->average_runs) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    struct Cricketer players[MAX];
    int i;
    printf("Enter data for 20 cricketers:\n");
    for (i = 0; i < MAX; i++) {
        printf("\nCricketer %d:\n", i + 1);
        printf("Name: ");
        fgets(players[i].name, sizeof(players[i].name), stdin);
        printf("Age: ");
        scanf("%d", &players[i].age);
        printf("Number of Test Matches: ");
        scanf("%d", &players[i].test_matches);
        printf("Average Runs: ");
        scanf("%f", &players[i].average_runs);
    }
    qsort(players, MAX, sizeof(struct Cricketer), compare_by_average_runs);
    printf("\nCricketers sorted by average runs (ascending):\n");
    printf("%-20s %-5s %-10s %-15s\n", "Name", "Age", "Matches", "Avg Runs");
    for (i = 0; i < MAX; i++) {
        printf("%-20s %-5d %-10d %-15.2f\n", players[i].name, players[i].age, players[i].test_matches, players[i].average_runs);
    }
    return 0;
}
