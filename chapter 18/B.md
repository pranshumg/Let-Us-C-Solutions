**(a)** Corrected:
```c
#include <stdio.h>

int main() {
    int i;
    char *a = "Hello";
    while (*a != '\0') {
        printf("%c", *a);
        a++;
    }
    return 0;
}
```
**(b)** Corrected:
```c
#include <stdio.h>

int main() {
    double dval;
    scanf("%lf", &dval);
    printf("Double Value = %lf\n", dval);
    return 0;
}
```

**(c)** Corrected:
```c
#include <stdio.h>

int main() {
    int ival;
    scanf("%d", &ival);
    printf("Integer Value = %d\n", ival);
    return 0;
}
```

**(d)** No Error.

**(e)** Corrected:
```c
#include <stdio.h>

int main() {
    char text[100];
    sprintf(text, "%4d\t%2.2f\n%s", 12, 3.452, "Merry Go Round");
    printf("%s\n", text);
    return 0;
}
```

**(f)** Corrected:
```c
#include <stdio.h>

int main() {
    char buffer[50];
    int no = 97;
    double val = 2.34174;
    char name[10] = "Shweta";
    sprintf(buffer, "%d %lf %s", no, val, name);
    printf("%s\n", buffer);
    sscanf(buffer, "%d %lf %s", &no, &val, name);
    printf("%d %lf %s\n", no, val, name);
    return 0;
}
```