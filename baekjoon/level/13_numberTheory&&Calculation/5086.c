// 배수와 약수
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a,b;

    while(1){
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)return 0;
        else if(b%a==0)printf("factor\n");
        else if(a%b==0)printf("multiple\n");
        else printf("neither\n");
    }

    return 0;
}