#include <stdio.h>
int main() {

	int n = 0, i = 0, j = 0;
	scanf("%d", &n);	
	for (i = 1; i <= n; i++)
	{
		for (int k = 0; k < i ; k++)
		{
			printf("*");
		 
		}
		for (j = 1; j <= 2*n-2*i; j++)
		{
			printf(" ");
		}
		for (int t = 0; t < i; t++)
		{
			printf("*");
		}

		printf("\n");
	
	}	

	for (i = n-1; i > 0; i--)
	{
		for (int k = i; k > 0; k--)
		{
			printf("*");
		} 
		for (j = 0; j < 2*n - 2*i; j++)
		{
			printf(" ");
		}
		for (int t = i; t > 0; t--)
		{
			printf("*");
		}


		printf("\n");
	}

	

	return 0;
}
