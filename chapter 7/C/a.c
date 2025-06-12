#include <stdio.h>

int main() {
    int class, sub;

    printf("Enter your class (1st/2nd/3rd): ");
    scanf("%d", &class);

    printf("Enter no. of subjects you have failed in: ");
    scanf("%d", &sub);

    switch (class) {
        case 1:
            if (sub > 3) {
                printf("\nNo Grace\n");
            } else {
                printf("\nGrace of 5 marks per subject\n");
            }
            break;

        case 2:
            if (sub > 2) {
                printf("\nNo Grace\n");
            } else {
                printf("\nGrace of 4 marks per subject\n");
            }
            break;

        case 3:
            if (sub > 1) {
                printf("\nNo Grace\n");
            } else {
                printf("\nGrace of 5 marks\n");
            }
            break;

        default:
            printf("\nInvalid Input\n");
    }

    return 0;
}
