// 별 찍기 - 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N,a,b;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}