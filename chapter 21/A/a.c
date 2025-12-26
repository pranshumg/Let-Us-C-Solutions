#include <stdio.h>

int main() {
    int game;
    char *games[] = {
        "Cricket", "Basketball", "Football", "Hockey", "Lawn Tennis",
        "Table Tennis", "Carom", "Chess", "Kabaddi"
    };
    printf("Enter the number representing the games won (bitmask): ");
    scanf("%d", &game);
    int cnt = 0;
    printf("Games won:\n");
    for (int i = 0; i < 9; i++) {
        if (game & (1 << i)) {
            printf("%s\n", games[i]);
            cnt++;
        }
    }
    if (cnt >= 5) {
        printf("College won the Champion of Champions trophy.\n");
    } else {
        printf("College did not win the trophy.\n");
    }
    return 0;
}