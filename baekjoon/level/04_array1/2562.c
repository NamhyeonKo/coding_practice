// 최댓값
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int max, i;
	int k = 0;
	int a[9];
	for (i = 0; i < 9; i++)
	{
		scanf("%d",&a[i]);
	}
	
	max = 0;
	for (i = 0; i < 9; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			k = i+1;
		}
	}
	printf("%d\n", max);
	printf("%d\n", k);
}