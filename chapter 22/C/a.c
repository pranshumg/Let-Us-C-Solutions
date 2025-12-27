#include <stdio.h>

struct date {
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 12;
};

int main() {
    struct date emp[10];
    printf("Enter day, month and year for 10 employees:\n");
    for (int i = 0; i < 10; i++) {
        unsigned int day, month, year;
        scanf("%u %u %u", &day, &month, &year);
        emp[i].day = day;
        emp[i].month = month;
        emp[i].year = year;
    }
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (emp[j].year > emp[j + 1].year) {
                struct date temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
    printf("\nSorted by year:\n");
    for (int i = 0; i < 10; i++) {
        printf("%02u-%02u-%04u\n", emp[i].day, emp[i].month, emp[i].year);
    }
    return 0;
}