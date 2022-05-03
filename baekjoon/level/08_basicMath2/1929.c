// 소수 구하기 (에라토스테네스의 체로 풀기)
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int isPrimeNumber(int n){
    int i;
    if(n==1)return 0;
    for(i=2;i<=sqrt(n);i++)if(n%i==0)return 0;
    return 1;
}

int main(){
    int m,n, i;

    scanf("%d %d",&m,&n);

    for(i=m;i<=n;i++) if(isPrimeNumber(i)==1)printf("%d\n",i);

    return 0;
}