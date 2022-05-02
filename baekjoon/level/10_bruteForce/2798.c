// 블랙잭
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n, m, i, num[100], j ,k, sum, res = 0;

    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++)scanf("%d",&num[i]);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)continue;
            for(k=0;k<n;k++){
                if(k==i||k==j)continue;
                sum = num[i]+num[j]+num[k];
                if(sum<=m&&sum>res)res = sum;
            }
        }
    }

    printf("%d",res);

    return 0;
}