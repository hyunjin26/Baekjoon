#include <stdio.h>

int main() {

	int N;
	scanf("%d", &N);

	int bag=0;

	while (1) {
 		if (N % 5 == 0) {
			bag += N / 5;
			printf("%d", bag);
			break;
		}
		N = N - 3;
	    bag++;

		if (N < 0) {
			printf("-1");
			break;
		}
	}
	return 0;
}
