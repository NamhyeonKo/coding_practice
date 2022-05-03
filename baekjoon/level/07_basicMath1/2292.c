// 벌집
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n, res, i, start = 0, end = 1;

    scanf("%d",&n);

    for (i=6;;i+=6){
        if(start<n&&n<=end){
            printf("%d",i/6);
            break;
        }
        start = end;
        end += i;
    }
    return 0;
}