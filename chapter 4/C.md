**(a)**
```c
#include <stdio.h>

int main() {
    char spy = 'a', password = 'z';
    if (spy == 'a' || password == 'z')
        printf("All the birds are safe in the nest\n");

    return 0;
}
```

**(b)**
```c
#include <stdio.h>

int main() {
    int i = 10, j = 20;
    if ((i == 5) && (j == 10))
        printf("Have a nice day\n");

    return 0;
}
```

**(c)**
```c
#include <stdio.h>

int main() {
    int x = 10, y = 20;
    if (x >= 2 && y <= 50)
        printf("%d\n", x);

    return 0;
}
```

**(d)**
```c
#include <stdio.h>

int main() {
    int x = 2;
    if (x == 2 && x != 0)
        printf("Hello\n");
    else
        printf("Bye\n");

    return 0;
}
```

**(e)**
```c
#include <stdio.h>

int main() {
    int j = 65;
    printf("%d\n", (j >= 65 ? j : (char)j));

    return 0;
}
```

**(f)**
```c
#include <stdio.h>

int main() {
    int i = 10, j;
    (i >= 5 ) ? (j = 10) : (j = 15);
    printf("%d %d\n", i, j);

    return 0;
}
```

**(g)**
```c
#include <stdio.h>

int main() {
    int a = 5, b = 6;
    a == b ? printf("%d"\n, a) : 0;
    
    return 0;
}
```

**(h)**
```c
#include <stdio.h>

int main() {
    int n = 9;
    (n == 9 ? printf("Correct\n") : printf("Wrong\n"));

    return 0;
}
```