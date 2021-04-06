#include <stdio.h>

int main()
{
	int max = -1000000;
	int n, j;
	int a[10];


	for (int i=0; i < 9; i++)
	{
		scanf("%d", &a[i]);
		
		if (a[i] > max)
		{
			max = a[i];
			j = i;
		}

	}

	printf("%d\n%d", max, j+1);


	return 0;
}
