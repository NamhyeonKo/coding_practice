// 최대공약수와 최소공배수
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a,b,i, gcd, lcm;

    scanf("%d %d",&a,&b);

    for(i=1;i<=(a<b?a:b);i++) if((a%i==0)&&(b%i==0))gcd=i;
    for(i=(a>b?a:b);;i++) 
        if((i%a==0)&&(i%b==0)){
            lcm = i;
            break;
        }

    printf("%d\n%d",gcd,lcm);

    return 0;
}