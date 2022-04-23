#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n,k, cnt=0, c;
    int i;
    int coin[10]={0};

    scanf("%d %d",&n,&k);

    for(i=0;i<n;i++)scanf("%d",&coin[i]);

    for(i=n-1;i>=0;i--){
        if(k/coin[i]>0){
            c = k/coin[i];
            cnt+=c;
            k -= coin[i]*c;
        }
        if(k==0)break;
    }

    printf("%d",cnt);

    return 0;
}