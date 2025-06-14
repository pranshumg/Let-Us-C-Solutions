**(a)** Corrected Code:
```c
#include <stdio.h>

int main() {
	float a = 12.25, b = 12.52;
	if (a == b)
		printf("a and b are equal\n");
	return 0;
}
```

**(b)** Corrected Code:
```c
#include <stdio.h>

int main() {
	int j = 10, k = 12;
	if (k >= j) {
		{
			k = j;
			j = k;
		}
	}
	return 0;
}
```

**(c)** Corrected Code:
```c
#include <stdio.h>

int main() {
	if ('X' < 'x')
		printf("ascii value of X is smaller than that of x\n");
    return 0;
}
```

**(d)** Corrected Code:
```c
#include <stdio.h>

int main() {
	int x = 10;
	if (x >= 2) 
		printf("%d\n", x);
	return 0;
}
```

**(e)** Corrected Code:
```c
#include <stdio.h>

int main() {
	int x = 10, y = 15;
	if (x % 2 == y % 3)
		printf("Carpathians\n");
    return 0;
}
```

**(f)** Corrected Code:
```c
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
		printf("This is a game\n");
	else	
		printf("You have to play it\n");
	return 0;
}
```
