// X보다 작은 수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, x;
	scanf("%d %d", &N, &x);
	int a[10000];
	for (int i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < N; i++)
	{
		if (a[i] < x)
			printf("%d ", a[i]);
	}
	printf("\n");
}