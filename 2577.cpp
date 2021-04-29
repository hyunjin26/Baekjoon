#include <stdio.h>

int main() {
	int a, b, c, x, i, j;
	int n[10] = { 0 };

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	x = a * b * c;

	while (x != 0) {
		j =	 x % 10;
		n[j] = n[j] + 1;
		x = x/10;
	}

	for (i = 0; i < 10; i++) {
		printf("%d\n", n[i]);
	}

	return 0;
