// 소수 찾기
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isPrimeNumber(int n){
    int i;
    if(n==1)return 0;
    for(i=2;i<n;i++)if(n%i==0)return 0;
    return 1;
}

int main(){
    int n, a, cnt=0, i;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a);
        cnt += isPrimeNumber(a);
    }

    printf("%d",cnt);

    return 0;
}