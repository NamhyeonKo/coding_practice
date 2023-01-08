// 검문
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int cnt = 0, n, j;
    long long num[100], min = 1000000001, i, k, res;
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&num[i]);
        if(num[i]<min) min=num[i];
    }

    printf("%d\n",min);
    
    for(i=0;i<=min;i++){
        k=min-i;
        for(j=0;j<n;j++)if((num[j]-i)%k!=0)break;
        if(n==j){
            res = k;
            break;
        }
    }

    for(i=2;i<=res;i++)if(res%i==0)printf("%d ",i);

    return 0;
}