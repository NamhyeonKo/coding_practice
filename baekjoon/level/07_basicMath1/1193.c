// 분수 찾기
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n, d = 0;

    scanf("%d",&n);

    while(1){
        d++;
        if(n-d<=0){
            if(d%2==0) printf("%d/%d",n,d-n+1);
            else printf("%d/%d",d-n+1,n);
            break;
        }
        n-=d;
    }

    return 0;
}