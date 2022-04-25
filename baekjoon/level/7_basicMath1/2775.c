// 부녀회장이 될테야
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int factorial(int n){
    int f = 1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}

int main(){
    int t, k, n, i, num;

    scanf("%d",&t);
    
    for(i=0;i<t;i++){
        scanf("%d\n%d",&k,&n);
        num = factorial(k+n)/(factorial(k+1)*factorial(n-1));
        printf("%d\n",num);
    }

    return 0;
}