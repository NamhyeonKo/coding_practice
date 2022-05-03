// 곱셈
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, b1, b2, b3;
	
	scanf("%d", &a);
	scanf("%d", &b);

	b1 = b % 10;
	b3 = b / 10;

	b2 = b3 % 10;
	b3 /= 10;

	printf("%d\n", a * b1);
	printf("%d\n", a * b2);
	printf("%d\n", a * b3);
	printf("%d\n", a * b);
}