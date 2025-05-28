### **(a)**
```c
#include <stdio.h>

int main() {
	int a; float b; int c;
	a = 25; b = 3.24; c = a + b * b - 35;

	return 0;
}
```

### **(b)**
```c
#include <stdio.h>

int main() {
	int a = 35; float b = 3.24;
	printf("%d %f %d", a, b + 1.5, 235);

	return 0;
}
```

### **(c)**
```c
#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	return 0;
}
```

### **(d)**
```c
#include <stdio.h>

int main() {
	int m1, m2, m3;
	printf("Enter values of marks in 3 subjects");
	scanf("%d %d %d", &m1, &m2, &m3);
	printf("You entered %d %d %d", m1, m2, m3);

	return 0;
}
```