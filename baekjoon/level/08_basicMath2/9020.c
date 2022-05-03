// 골드바흐의 추측
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isNotPrime[10000]={0};

void multiple(int n){
    int i;
    for(i=n*2;i<=10000;i+=n)isNotPrime[i-1]=1;
}

int main(){
    int i, j, n, k, min1, min2, min=10000;

    for(i=2;i<=10000;i++)if(isNotPrime[i-1]==0)multiple(i);

    scanf("%d",&n);
    for(i=0;i<n;i++){
        min = 10000;
        scanf("%d",&k);
        for(j=2;j<=k/2;j++){
            if(isNotPrime[j-1]==0&&isNotPrime[k-j-1]==0){
                if(k - 2*j<min){
                    min1 = j;
                    min2 = k-j;
                    min = k - 2 * j;
                }
            }
        }
        printf("%d %d\n",min1,min2);
    }

    return 0;
}