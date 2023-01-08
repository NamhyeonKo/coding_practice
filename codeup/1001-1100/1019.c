// 1019 : [기초-입출력] 연월일 입력받아 그대로 출력하기
#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d.%d.%d", &a, &b, &c);
    printf("%04d.%02d.%02d", a, b, c);
    return 0;
}
