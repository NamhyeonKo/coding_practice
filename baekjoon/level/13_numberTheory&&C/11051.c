// 이항 계수 2
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
    int n, k, i, min;
    long long res;

    scanf("%d %d",&n,&k);
    min = k<n-k? k:n-k;
    res = multiple(n,min) / multiple(min,min);
    printf("%d\n",res%10007);

    return 0;
}