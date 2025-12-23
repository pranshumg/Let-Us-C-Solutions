#include <stdio.h>
#include <stdlib.h>

struct date {
    int d, m, y;
};

struct employee {
    int empcode[6];
    char empname[20];
    struct date join_date;
    float salary;
};

int compare(const void *a, const void *b) {
    struct employee *e1 = (struct employee *)a;
    struct employee *e2 = (struct employee *)b;
    if (e1->join_date.y != e2->join_date.y)
        return e1->join_date.y - e2->join_date.y;
    if (e1->join_date.m != e2->join_date.m)
        return e1->join_date.m - e2->join_date.m;
    return e1->join_date.d - e2->join_date.d;
}

int main() {
    struct employee e[10];
    FILE *fp = fopen("EMP.DAT", "r");
    FILE *out = fopen("SORTED_EMP.DAT", "w");
    fread(e, sizeof(struct employee), 10, fp);
    qsort(e, 10, sizeof(struct employee), compare);
    fwrite(e, sizeof(struct employee), 10, out);
    fclose(fp);
    fclose(out);
    return 0;
}