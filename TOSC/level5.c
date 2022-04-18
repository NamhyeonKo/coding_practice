#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int onega[6] = { 200,100,150,300,250,400 };
	int baesong[6] = { 100,50,150,250,300,350 };
	int i, n, cnt;
	int income[6] = { 0 };
	int res;

	for (i = 0; i < 6; i++)income[i] = onega[i] * 9 - baesong[i];

	scanf("%d", &n);
	scanf("%d", &cnt);

	res = income[n - 1] * cnt;

	printf("%d", res);
}