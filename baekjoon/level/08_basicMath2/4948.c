// 베르트랑 공준
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isNotPrime[246912]={0};

void multiple(int n){
    int i;
    for(i=n*2;i<=246912;i+=n)isNotPrime[i-1]=1;
}

int main(){
    int n, i, cnt;

    for(i=2;i<=246912;i++)if(isNotPrime[i-1]==0)multiple(i);

    while(1){
        scanf("%d",&n);
        if(n==0)break;
        cnt=0;

        for(i=n+1;i<=n*2;i++) if(isNotPrime[i-1]==0)cnt++;
        printf("%d\n",cnt);
    }
    
    return 0;
}