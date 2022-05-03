// 손익 분기점
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(c<=b) printf("-1");
    else printf("%d",a / (c-b) + 1);

    return 0;
}