// 윤년
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, k;
	scanf("%d", &a);
	
	k = a % 4 != 0 ? 0 :
		a % 100 != 0 ? 1 :
		a % 400 == 0 ? 1 : 0;
	printf("%d\n", k);
}