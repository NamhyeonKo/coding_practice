// A+B - 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N,A,B;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
}