// 이항 계수2
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int pascal[1001][1001];

int main(){
    int n, k, i,j;

    scanf("%d %d",&n,&k);

    for(i=0;i<=n;i++){
        for(j=0;j<i+1;j++){
            if(j==0||j==i)pascal[i][j]=1;
            else pascal[i][j]=(pascal[i-1][j-1]+pascal[i-1][j])%10007;
        }
    }

    printf("%d",pascal[n][k]);

    return 0;
}