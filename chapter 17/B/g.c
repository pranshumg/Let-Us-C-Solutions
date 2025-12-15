#include <stdio.h>

struct Date {
    int day; 
    int month; 
    int year;
};

int compare_dates(struct Date d1, struct Date d2) {
    return (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year) ? 0 : 1;
}