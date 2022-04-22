#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ABC(int arr[],int k){
    int i, max = -99999, max_i = 0;

    for(i=k;i<10;i++)
        if(arr[i]>max){
            max = arr[i];
            max_i = i;
        }
    
    arr[max_i] = arr[k];
    arr[k] = max;
}

int main(){
    int i;
    int arr[10];

    for(i=0; i<10; i++) scanf("%d",&arr[i]);

    for(i=0; i<10; i++) ABC(arr,i);

    for(i=0; i<10; i++) printf(" %d",arr[i]);

    return 0;
}