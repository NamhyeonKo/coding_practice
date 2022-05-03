// 평균
#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int N, max = 0;
	int i, j, a;
	float avg, sum = 0, score[1000];

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%f", &score[i]);
		if (score[i] > max)
			max = score[i];
	}
	for (i = 0; i < N; i++)
	{
		score[i] = score[i] / max * 100;
		sum += score[i];
	}
	avg = (float)sum / N;

	printf("%f", avg);
}