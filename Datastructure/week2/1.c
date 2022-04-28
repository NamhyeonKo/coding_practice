// 나머지 연산
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int modulo(int a, int b){
    return a % b;
}

int main(){
    int a, b;

    scanf("%d %d",&a,&b);
    printf("%d",modulo(a,b));

    return 0;
}