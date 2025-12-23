#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[30];
};

int main() {
    FILE *master = fopen("MASTER.DAT", "r");
    FILE *trans = fopen("TRANS.DAT", "r");
    FILE *updated = fopen("UPDATED.DAT", "w");
    struct student m, t;
    char code;
    while (fread(&m, sizeof(m), 1, master)) {
        int matched = 0;
        rewind(trans);
        while (fread(&t, sizeof(t), 1, trans)) {
            if (m.roll == t.roll) {
                matched = 1;
                break;
            }
        }
        if (!matched) {
            fwrite(&m, sizeof(m), 1, updated);
        }
    }
    rewind(trans);
    while (fread(&t, sizeof(t), 1, trans)) {
        fwrite(&t, sizeof(t), 1, updated);
    }
    fclose(master);
    fclose(trans);
    fclose(updated);
    return 0;
}