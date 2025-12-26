#include <stdio.h>

int main() {
    int data[] = {273, 548, 786, 1096};
    char *years[] = {"1st", "2nd", "3rd", "4th"};
    char *streams[] = {"Mechanical", "Chemical", "Electronics", "CS"};
    for (int i = 0; i < 4; i++) {
        int val = data[i];
        int year = val & 0xF; // Bits 0–3
        int stream = (val >> 4) & 0xF; // Bits 4–7
        int room = val >> 8;
        printf("Student %d:\n", i + 1);
        printf("  Year: %s Year\n", years[year - 1]);
        printf("  Stream: %s\n", streams[stream]);
        printf("  Room Number: %d\n\n", room);
    }
    return 0;
}