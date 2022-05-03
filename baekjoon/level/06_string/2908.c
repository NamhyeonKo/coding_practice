// 상수
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char a[4],b[4];
    int i, na=0, nb=0, n;

    scanf("%s %s",a,b);

    for(i=0;i<3;i++){
        na*=10;
        na+=a[2-i]-'0';
    }
    for(i=0;i<3;i++){
        nb*=10;
        nb+=b[2-i]-'0';
    }

    n = na>nb?na:nb;

    printf("%d\n",n);

    return 0;
}