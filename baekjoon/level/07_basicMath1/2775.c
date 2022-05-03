// 부녀회장이 될테야
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long factorial(int start, int end){
    long long f = 1;
    for(int i=start; i<=end; i++)f*=i;
    return f;
}

int main(){
    int t, k, n, i;
    long long num;

    scanf("%d",&t);
    
    for(i=0;i<t;i++){
        scanf("%d\n%d",&k,&n);
        num = factorial(k+2,k+n)/factorial(1,n-1);
        printf("%d\n",num);
    }

    return 0;
}