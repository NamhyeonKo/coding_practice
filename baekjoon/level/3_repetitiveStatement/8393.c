// 합
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int sum = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
		sum += i;
	printf("%d\n", sum);
}