// 수 정렬하기
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n, *arr, i, j, tmp;

    scanf("%d",&n);

    arr = (int*)malloc(sizeof(int)*n);

    for(i=0; i<n; i++)scanf("%d",&arr[i]);

    for(i=0;i<n-1;i++)
        for(j=0; j<n-1; j++)
            if(arr[j]>arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }

    for(i=0; i<n; i++)printf("%d\n",arr[i]);

    return 0;
}