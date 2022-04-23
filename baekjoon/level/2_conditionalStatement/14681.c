// 사분면 고르기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	if (x > 0 && y > 0)
		printf("1\n");
	else if (x < 0 && y>0)
		printf("2\n");
	else if (x < 0 && y < 0)
		printf("3\n");
	else
		printf("4\n");
}