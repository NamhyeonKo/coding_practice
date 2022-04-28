// 누적 평균
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *prefixAverages1(int *x, int n){
    int i, sum = 0, j, *a;
    float avg;
    
    a = (int *)malloc(sizeof(int)*n);

    for(i=0; i<n; i++){
        sum = 0;
        for(j=0;j<=i;j++)sum+=x[j];
        avg = (float)sum / (i+1)+0.5;
        a[i] = (int)avg;
    }
    return a;
}

int *prefixAverages2(int *x, int n){
    int i, sum = 0, *a;
    float avg;
    
    a = (int *)malloc(sizeof(int)*n);

    for(i=0; i<n; i++){
        sum += x[i];
        avg = (float)sum / (i+1)+0.5;
        a[i] = (int)avg;
    }
    return a;
}

int main(){
    int *arr1=NULL, *arr2 = NULL, *x=NULL, n, i;

    scanf("%d",&n);
    x = (int*)malloc(n*sizeof(int));

    for(i=0; i<n; i++)scanf("%d",&x[i]);

    arr1 = prefixAverages1(x,n);

    for(i=0; i<n; i++)printf("%d ",arr1[i]);
    printf("\n");

    arr2 = prefixAverages2(x,n);

    for(i=0; i<n; i++)printf("%d ",arr2[i]); 

    return 0;
}