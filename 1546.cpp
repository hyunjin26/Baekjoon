#include <stdio.h>

int main() {
	int n, i;
	double max = 0, sum = 0, ave = 0, score[1000];
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%lf", &score[i]);
		if (max < score[i]) max = score[i];
	}

	for (i = 0; i < n; i++) {
		score[i] = score[i] / max * 100.0;
		sum = sum + score[i];
	}

	ave = sum / n;
	printf("%lf", ave);

	return 0;
}
