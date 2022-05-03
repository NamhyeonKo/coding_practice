// 더하기 사이클
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, k, a, b, c, i = 0;
	scanf("%d", &N);
	k = N;
	
	while (1)
	{
		if (k < 10)
		{
			a = 0;
			b = k;
		}
		else
		{
			b = k % 10;
			a = k / 10;
		}
		c = (a + b) % 10;
		k = (10 * b) + c;
		i++;
		if (k == N)
			break;
	}
	printf("%d\n", i);
}