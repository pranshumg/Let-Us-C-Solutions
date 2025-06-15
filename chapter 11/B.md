**(a)** Corrected Code:
```c
#include <stdio.h>

int main() {
    long num = 2;
    printf("%ld\n", num);

    return 0;
}
```

**(b)** Corrected Code:
```c
#include <stdio.h>

int main() {
    unsigned char ch = 200 ;
    printf( "%d\n", ch );

    return 0 ;
}
```

**(c)** Corrected Code:
```c
#include <stdio.h>

int main() {
    long double a = 25.345e3; 
    double b = 25;
    printf("%Lf %lf\n", a, b);

    return 0 ;
}
```

**(d)** ✅ No errors
