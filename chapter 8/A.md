### **(a)**  
```c
#include <stdio.h>

int addmult(int x, int y); 

int main() {
    int i = 3, j = 4, k, l = 0; 
    k = addmult(i, j);
    l = addmult(k, i); 
    printf("%d %d\n", k, l);

    return 0;
}
int addmult(int x, int y) {
    int u, v;
    u = x + y;
    v = x * y;

    return v; 
}
```

### **(b)**
```c
#include <stdio.h>

void message(); 

int main() {
    message(); 
    return 0;
}

void message() {
    printf("Learn from him online at ykanetkar.com\n");
}
```

### **(c)**
```c
#include <stdio.h>

void printit(float a, char ch); 

int main() {
    float a = 15.5;
    char ch = 'C';
    printit(a, ch);

    return 0;
}

void printit(float a, char ch) {
    printf("%f %c\n", a, ch);
}
```

### **(d)**
```c
#include <stdio.h>

void let_us_c(); 

int main() {
    let_us_c();
    return 0;
}

void let_us_c() {
    printf("Learn C online...\n");
    printf("At ykanetkar.com\n");
}
```
