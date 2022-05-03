// 별 찍기 - 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N,a,b;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		for (int j = N-i-1; j>0; j--)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}