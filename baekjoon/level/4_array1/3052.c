// 나머지
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int namuji[10];
	int i, j, a, b;

	b = 10;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		namuji[i] = a % 42;
	}
	
	for (i = 0; i < 9; i++)
		for (j = i+1; j < 10; j++)
			if (namuji[i] == namuji[j])
				namuji[j] = -1;
	for (i = 0; i < 10; i++)
		if (namuji[i] == -1)
			b--;
	printf("%d", b);
}