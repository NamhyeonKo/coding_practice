#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int n){
    int i, s = 0;
    for(i=1;i<=n;i++)s+=i;

    return s;
}

int main(){
    int x, sum1 = 0;

    scanf("%d",&x);

    for(int i=1;i<=x;i++)sum1 += sum(i);
    
    printf("%d",sum1);

    return 0;
}