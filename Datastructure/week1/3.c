#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *p, int *q){
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}

int main(){
    int n, i, arr[50],a,b;

    scanf("%d",&n);
    for(int i=0; i<n; i++)scanf("%d",&arr[i]);
    scanf("%d %d",&a,&b);

    swap(arr+a,arr+b);

    for(int i=0; i<n; i++)printf(" %d",arr[i]);

    return 0;
}