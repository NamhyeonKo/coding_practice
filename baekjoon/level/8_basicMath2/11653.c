// 소인수 분해
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n, i, k=2;

    scanf("%d",&n);

    if(n==1)return 0;

    while(n>1){
        for(i=k;i<=n;i++)
            if(n%i==0){
                k=i;
                break;
            }
        n/=k;
        printf("%d\n",k);
    }

    return 0;
}