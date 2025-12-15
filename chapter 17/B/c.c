#include <stdio.h>
#include <string.h>

struct part {
    char serial_no[10];
    int year;
    char material[30];
    int quantity;
};

void print_part_range(struct part p[], int n) {
    for (int i = 0; i < n; ++i) {
        if (strcmp(p[i].serial_no, "BB1") >= 0 && strcmp(p[i].serial_no, "CC6") <= 0) {
            printf("%s %d %s %d\n", p[i].serial_no, p[i].year, p[i].material, p[i].quantity);
        }
    }
}