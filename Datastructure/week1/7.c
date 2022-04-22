#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n, i;
    int *a=NULL, *b=NULL;

    scanf("%d",&n);

    a = (int*)malloc(sizeof(int)*n);
    b = (int*)malloc(sizeof(int)*n);

    if(a==NULL||b==NULL){
        printf("Error");
        return -1;
    }
    
    for(i=0; i<n; i++)scanf("%d",&a[i]);
    for(i=0; i<n; i++)scanf("%d",&b[i]);

    for(i=0;i<n;i++)printf(" %d",a[i]+b[n-i-1]);

    free(a);
    free(b);

    return 0;
}