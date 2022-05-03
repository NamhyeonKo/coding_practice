// 한수
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int hannumber(int n){
    int d1, d2;

    d1 = n/100 - (n/10)%10;
    d2 = (n/10)%10 - n%10;

    if (n>0&&n<100) return 1;
    else if(d1 == d2)return 1;
    else return 0;
}

int main(){
    int i, n, cnt = 0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)cnt+=hannumber(i);

    printf("%d",cnt);

    return 0;
}