// 소수
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
    int m,n,i,sum=0,cnt=0,min=0, check;

    scanf("%d\n%d",&m,&n);

    for(i=m;i<=n;i++){
        check = isPrimeNumber(i);
        if(check==1){
            if(min==0)min=i;
            sum+=i;
            cnt++;
        }
    }

    if(cnt==0)printf("-1");
    else printf("%d\n%d",sum,min);

    return 0;
}