#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int num[10000000]={0}, check[100000];
    int n, m, i, new;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d", &new);
        num[new-1] = 1;
    }

    scanf("%d",&m);
    for(i=0;i<m;i++)scanf("%d",&check[i]);
    
    for(i=0;i<m;i++)printf("%d ",num[check[i]-1]);

    return 0;
}