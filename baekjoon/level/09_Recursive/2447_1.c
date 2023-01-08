#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
char star[2201][2201];
int num;
void practal(int x, int y, int num)
{
	if (num == 1)
	{
		star[x][y] = '*';
		return;
	}
	int k = num / 3;
	int cnt = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cnt++;
			if(cnt != 5)
				practal(x + i * k, y + j * k, k);
		}
			
	}
}

int main()
{
	scanf("%d", &num);
	for (int i = 0; i < 2200; i++)
	{
		for (int j = 0; j < 2200; j++)
			star[i][j] = ' ';
	}
	practal(0, 0, num);
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
			printf("%c", star[i][j]);
		printf("\n");
	}
}