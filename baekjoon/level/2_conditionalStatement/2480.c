// 주사위 세개
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    int prize;

    scanf("%d %d %d",&a,&b,&c);

    if(a==b&&b==c)prize=10000+(a*1000);
    else if(a==b&&b!=c)prize=1000+(a*100);
    else if(b==c&&c!=a)prize=1000+(b*100);
    else if(c==a&&a!=b)prize=1000+(c*100);
    else prize=(a>b&&a>c?a:b>a&&b>c?b:c)*100;

    printf("%d",prize);

    return 0;
}