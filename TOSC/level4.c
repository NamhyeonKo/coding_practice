#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int onega[6] = { 200,100,150,300,250,400 };
	int baesong[6] = { 100,50,150,250,300,350 };
	int i, n, cnt = 0, num = 0;
	int income[6] = { 0 };
	int res = 0;

	for (i = 0; i < 6; i++)income[i] = onega[i] * 9 - baesong[i];

	scanf("%d", &n);

	i = 0;
	while (i < n) {
		scanf("%d", &num);
		scanf("%d", &cnt);

		res += income[num - 1] * cnt;
		i += cnt;
	}

	printf("%d", res);
}