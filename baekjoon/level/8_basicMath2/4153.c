// 직각 삼각형
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a, b , c;

    while(1){
        scanf("%d %d %d",&a,&b,&c);
        if(a==0&&b==0&&c==0)break;
        if(a*a==b*b+c*c)printf("right\n");
        else if(b*b==c*c+a*a)printf("right\n");
        else if(c*c==b*b+a*a)printf("right\n");
        else printf("wrong\n");
    }

    return 0;
}