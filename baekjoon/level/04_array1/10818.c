// 최소, 최대
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, max, min;
	scanf("%d", &N);
	int a[100000];  // 백준에서는 a[N]으로 풀어도 가능함 -> 범위가 백만이라 숫자로 안되니 아마 동적할당을 해야할듯...
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&a[i]);
	}
	max = a[0];
	min = a[0];

	for (int i = 0; i < N; i++)
	{
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}
	printf("%d %d\n", min, max);
}