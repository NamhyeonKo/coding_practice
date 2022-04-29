// 수 정렬하기 3
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n, i, j, k, arr[10000] = {0};

    scanf("%d",&n);

    for(i=0; i<n;i++){
        scanf("%d",&k);
        arr[k-1]++;
    }

    for(i=0; i<10000; i++)
        for(j=0;j<arr[i];j++)
            printf("%d\n",i+1);

    return 0;
}