#include <stdio.h>

struct policy_holder {
    unsigned int gender : 1;     // 0 = Male, 1 = Female
    unsigned int is_minor : 1;   // 0 = Major, 1 = Minor
    char name[30];
    unsigned int duration : 6;   // Up to 63 years
};

int main() {
    struct policy_holder p;
    printf("Enter name: ");
    scanf("%s", p.name);
    unsigned int gender, is_minor, duration;
    printf("Enter gender (0 = Male, 1 = Female): ");
    scanf("%u", &gender);
    printf("Is the policy holder a minor? (0 = No, 1 = Yes): ");
    scanf("%u", &is_minor);
    printf("Enter duration of policy (in years): ");
    scanf("%u", &duration);
    p.gender = gender;
    p.is_minor = is_minor;
    p.duration = duration;
    printf("\nPolicy Details:\n");
    printf("Name: %s\n", p.name);
    printf("Gender: %s\n", p.gender ? "Female" : "Male");
    printf("Minor/Major: %s\n", p.is_minor ? "Minor" : "Major");
    printf("Duration: %u years\n", p.duration);
    return 0;
}
