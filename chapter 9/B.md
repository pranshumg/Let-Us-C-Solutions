**(a)** Corrected Code:
```c
#include <stdio.h>

int main() {
    float p = 23.24;
    float *q, **r;
    q = &p;
    r = &q;
    printf("%f %f\n", *q, **r);

    return 0;
}
```

**(b)** Corrected Code:
```c
#include <stdio.h>

int main() {
    char ch = 'A';
    int k = 35;
    float a = 3.14;
    printf("%p %p %p\n", (void *)&ch, (void *)&k, (void *)&a);

    return 0;
}
```

**(c)** Corrected Code:
```c
#include <stdio.h>

int function(int *);

int main() {
    int i = 35, z; 
    z = function(&i);
    printf("%d\n", z);

    return 0;
}

int function(int *m) {
    return (*m + 2);
}
```