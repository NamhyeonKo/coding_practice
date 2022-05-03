// 팩토리얼 0의 개수
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i, n, num[2]={0}, m = 1, min;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        m *= i;
        while(1){
            if(m%2!=0)break;
            num[0]++;
            m/=2;
        }
        while(1){
            if(m%5!=0)break;
            num[1]++;
            m/=5;
        }
    }

    min = num[0]<num[1]?num[0]:num[1];

    printf("%d",min);

    return 0;
}