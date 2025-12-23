#include <stdio.h>
#include <string.h>

struct customer {
    int accno;
    char name[30];
    float balance;
};

struct trans {
    int accno;
    char trans_type;
    float amount;
};

int main() {
    FILE *cust = fopen("CUSTOMER.DAT", "r+b");
    FILE *tran = fopen("TRANSACTIONS.DAT", "r");
    struct customer c;
    struct trans t;
    while (fread(&t, sizeof(t), 1, tran)) {
        rewind(cust);
        while (fread(&c, sizeof(c), 1, cust)) {
            if (c.accno == t.accno) {
                if (t.trans_type == 'D') {
                    c.balance += t.amount;
                } else if (t.trans_type == 'W' && c.balance - t.amount >= 100) {
                    c.balance -= t.amount;
                }
                fseek(cust, -sizeof(c), SEEK_CUR);
                fwrite(&c, sizeof(c), 1, cust);
                break;
            }
        }
    }
    fclose(cust);
    fclose(tran);
    return 0;
}