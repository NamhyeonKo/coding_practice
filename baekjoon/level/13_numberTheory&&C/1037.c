// 약수
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n, max = 0, min = 1000001, arr[50], num, cnt, i, j;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max)max = arr[i];
        if(arr[i]<min)min = arr[i];
    }

    printf("%d",max*min);

    return 0;
}