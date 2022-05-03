// 달팽이는 올라가고 싶다
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a, b, v, days = 0;

    scanf("%d %d %d",&a,&b,&v);

    days = (v-b)%(a-b)==0?(v-b)/(a-b):(v-b)/(a-b)+1;

    printf("%d",days);

    return 0;
}