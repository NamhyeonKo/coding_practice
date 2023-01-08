// 1020 : [기초-입출력] 주민번호 입력받아 형태 바꿔 출력하기
#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d-%d", &a, &b);
    printf("%06d%07d", a, b);
    return 0;
}
