// 다리 놓기
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long multiple(int start,int cnt){
    int i;
    long long m = 1;

    for(i=0; i<cnt; i++)m *= (start-i);
    return m;
}

int main(){
    int t, n, m, i, min;
    long long res;

    scanf("%d",&t);

    for(i=0; i<t; i++){
        scanf("%d %d",&n,&m);
        min = n<m-n? n:m-n;
        res = multiple(m,min) / multiple(min,min);
        printf("%d\n",res);
    }

    return 0;
}