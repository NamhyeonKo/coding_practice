// 이항 계수 1
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int multiple(int start, int end){
    int i, m = 1;
    if(end==0)return 1;
    for(i=start; i<=end; i++)m*=i;
    return m;
}

int main(){
    int n, k, c;

    scanf("%d %d",&n,&k);

    c = multiple(n - k + 1,n) / multiple(1,k);

    printf("%d",c);

    return 0;
}