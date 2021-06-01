#include <stdio.h>

int main() {

	int a = 0, b = 0, n=0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d \n", i, a + b);
	}

	return 0;
}
