#include <stdio.h>

struct donor {
    char name[21], address[41];
    int age, blood_type;
};

int main() {
    FILE *fp = fopen("donors.txt", "r");
    struct donor d;
    printf("Eligible Donors:\n");
    while (fscanf(fp, "%s %s %d %d", d.name, d.address, &d.age, &d.blood_type) == 4) {
        if (d.age < 25 && d.blood_type == 2)
            printf("%s %s %d %d\n", d.name, d.address, d.age, d.blood_type);
    }
    fclose(fp);
    return 0;
}
