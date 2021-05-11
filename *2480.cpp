#include <stdio.h>

int main() {

	int a, b, c;
	int money;
	int max;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c) {
		money = 10000 + a * 1000;
	}
	else if (a == b || a == c) {
		money = 1000 + a * 100;
	}
	else if (b == c) {
		money = 1000 + b * 100;
	}
	else {
		if (a > b && b> c || a > c && c > b){

			max = a;
		}
		else if (b > a && a > c || b > c && c > a) {
			max = b;
		}
		else {
			max = c;
		}
		money = max * 100;
	}

	printf("%d", money);


	return 0;
}
