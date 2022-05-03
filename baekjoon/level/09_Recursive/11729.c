// 하노이 탑 이동 순서
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void hanoi(int n,int start,int aux, int end){
    if(n==1) {printf("%d %d\n",start,end); return 0;}
    hanoi(n-1,start,end,aux);
    printf("%d %d\n",start,end);
    hanoi(n-1,aux,start,end);
    return 0;
}

int main(){
    int n, cnt;

    scanf("%d",&n);
    cnt = pow(2,n)-1;
    printf("%d\n",cnt);
    hanoi(n,1,2,3);

    return 0;
}