#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	
	for (int j=1; j<10; j++)
	{
		printf("%d * %d = %d\n",  a, j, a*j);
	}

	return 0;
}
