#include <stdio.h>
int main() {

	int n = 0, i = 0, j = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (int k = 1; k<= n-i; k++)
		{
			printf(" ");
		 
		}
		for (j = 1; j <= i*2-1; j++)
		{
			printf("*");
		}

		printf("\n");
	}	

	return 0;
}
