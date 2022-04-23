// 숫자의 합
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char num[101];
    int n, i, sum=0;

    scanf("%d",&n);
    getchar();

    gets(num);

    for(i=0; i<n; i++){
        sum += num[i] - '0';
    }

    printf("%d",sum);
    
    return 0;
}