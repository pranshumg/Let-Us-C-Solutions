**(a)** Corrected:
```c
#include <stdio.h>

int main() {
    int twod[][4] = { 2, 4, 6, 8 };
    printf("%d\n", twod[0][0]); 
    return 0;
}
```

**(b)** Corrected:
```c
#include <stdio.h>

int main() {
    int three[3][3] = {
        {2, 4, 3}, {6, 8, 2}, {2, 3, 1}
    };
    printf("%d\n", three[1][1]); 
    return 0;
}
```
