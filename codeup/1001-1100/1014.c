// 1014 : [기초-입출력] 문자 2개 입력받아 순서 바꿔 출력하기(설명)
#include <stdio.h>

int main()
{
    char a,b;
    scanf("%c %c", &a, &b);
    printf("%c %c", b, a);
    return 0;
}