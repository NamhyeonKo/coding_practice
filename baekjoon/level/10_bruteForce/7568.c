// 덩치
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int volume[2][50]={0}, rank[50], i,n, j;

    scanf("%d",&n);

    for(i=0;i<n;i++)scanf("%d %d",&volume[0][i],&volume[1][i]);

    for(i=0;i<n;i++){
        rank[i] = 1;
        for(j=0;j<n;j++) if(volume[0][i]<volume[0][j]&&volume[1][i]<volume[1][j])rank[i]++;
    }

    for(i=0;i<n;i++)printf("%d ",rank[i]);

    return 0;
}