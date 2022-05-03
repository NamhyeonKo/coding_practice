// 팩토리얼
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int factorial(int n){
    if(n==1||n==0)return 1;
    return n * factorial(n-1);
}

int main(){
    int n;

    scanf("%d",&n);
    printf("%d",factorial(n));

    return 0;
}