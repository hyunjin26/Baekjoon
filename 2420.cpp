#include <stdio.h>

int main() {

	long long a, b, sum;
	scanf("%lld %lld", &a, &b);
	sum = a - b;
	if (sum < 0) {
		sum = sum * -1;
	}
	printf("%lld", sum);
	return 0;
}
