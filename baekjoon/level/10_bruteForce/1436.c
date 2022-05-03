// 영화감독 숌
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findendnumber(int n){
    while(n>0){
        if(n%1000==666)return 1;
        n /= 10;
    }
    return 0;
}

int main(){
    int n, cnt = 0, i;

    scanf("%d",&n);

    for(i=666;;i++){
        if(findendnumber(i)==1) cnt++;
        if(cnt==n)break;
    }

    printf("%d",i);

    return 0;
}