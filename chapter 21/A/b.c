#include <stdio.h>

struct animal {
    char name[30];
    int type;
};

int main() {
    struct animal a = {"OCELOT", 18};
    printf("Animal: %s\n", a.name);
    if (a.type & (1 << 4)) {
        printf("Diet: Carnivore\n");
    } else {
        printf("Diet: Herbivore\n");
    }
    if (a.type & (1 << 0)) {
        printf("Type: Canine\n");
    } else if (a.type & (1 << 1)) {
        printf("Type: Feline\n");
    } else if (a.type & (1 << 2)) {
        printf("Type: Cetacean\n");
    } else if (a.type & (1 << 3)) {
        printf("Type: Marsupial\n");
    }
    return 0;
}
