// 링
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n, i, arr[100], min, a,b,j,gcd;

    scanf("%d",&n);

    for(i=0; i<n; i++)scanf("%d",&arr[i]);

    for(i=1;i<n;i++){
        gcd = 1;
        min = arr[0]<arr[i]?arr[0]:arr[i];
        for(j=2;j<=min;j++)if(arr[0]%j==0&&arr[i]%j==0)gcd=j;
        printf("%d/%d\n",arr[0]/gcd,arr[i]/gcd);
    }
    return 0;
}