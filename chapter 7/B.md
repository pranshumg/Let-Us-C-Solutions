### **(a)** 
```c
#include <stdio.h>
int main() {
    int suite = 1;
    switch (suite) {
        case 0: 
            printf("Club\n");
            break; 
        case 1: 
            printf("Diamond\n");
            break; 
    }
    return 0;
}
```

### **(b)** 
```c
#include <stdio.h>
int main() {
    int temp;
    scanf("%d", &temp);
    if (temp <= 20) {
        printf("Oooooohhhh! Damn cool!\n");
    } else if (temp > 20 && temp <= 30) {
        printf("Rain rain here again!\n");
    } else if (temp > 30 && temp <= 40) {
        printf("Wish I am on Everest!\n");
    } else {
        printf("Good old Nagpur weather!\n");
    }
    return 0;
}
```

### **(c)** 
```
error: switch quantity not an integer
```
To fix this, you would need to use an int for the switch expression and integer constants for the case labels, or use if-else statements for floating-point comparisons.

### **(d)** 
```
error: duplicate case value
```
To fix this, you would need to ensure that case labels are unique. For example, you could use different constant values or refactor the logic.
