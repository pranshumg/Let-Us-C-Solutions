#include <stdio.h>

int main() {
	int h = 1189, w = 841, t;
	
	for (int i = 0; i <= 8; i++) {
		printf("A%d : %d mm x %d mm\n", i, h, w);
		t = h;
		h = w;
		w = h / 2;
	}

	return 0;
}