// 최소공배수
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int uclid_gcd(int a, int b){
    int r;
    while(1){
        r = a%b;
        a = b;
        b = r;
        if(r==0)break;
    }
    return a;
}

int main(){
    int n, a, b, lcm, i;

    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n",a*b/uclid_gcd(a,b));
    }


    return 0;
}