// 알람 시계
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int hour, min;
	scanf("%d %d", &hour, &min);
	
	if (min >= 45)
		printf("%d %d\n", hour, min - 45);
	else
	{
		if (hour == 0)
			printf("%d %d\n", 23, min + 15);
		else
			printf("%d %d\n", hour-1, min + 15);
	}
}