#include <stdio.h>

int main()
{
	int c;
	int i, j;
	int max = -1000000;
	int min = 1000000;

	scanf("%d", &c);

	for (i = 0; i < c; i++)
	{
		scanf("%d", &j);

		if (j < min)
		{
			min = j;
		}

		if (j > max)
		{
			max = j;
		}


	}


	printf("%d %d", min, max);
	return 0;


}
