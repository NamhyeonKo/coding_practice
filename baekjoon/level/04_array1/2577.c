// 숫자의 개수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c, mul, k;
	int arr[10] = { 0,0,0,0,0,0,0,0,0,0 };
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	mul = a * b * c;
	while(mul > 0)
	{
		k = mul % 10;
		mul /= 10;
		if (k == 0) //case로 푸는게 좋을지도?
			arr[0]++;
		else if (k == 1)
			arr[1]++;
		else if (k == 2)
			arr[2]++;
		else if (k == 3)
			arr[3]++;
		else if (k == 4)
			arr[4]++;
		else if (k == 5)
			arr[5]++;
		else if (k == 6)
			arr[6]++;
		else if (k == 7)
			arr[7]++;
		else if (k == 8)
			arr[8]++;
		else
			arr[9]++;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
}