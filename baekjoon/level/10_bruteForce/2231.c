// 분해합
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int arr[1000000]={0};

void generator(int n){
    int sum = n, origin = n;
    
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(arr[sum-1]==0)arr[sum-1] = origin;
}

int main(){
    int n, i;

    scanf("%d",&n);

    for(i=1;i<=n;i++)generator(i);

    printf("%d",arr[n-1]);

    return 0;
}