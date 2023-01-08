// 조합 0의 개수
// 팩토리얼 0의 개수
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i, n, k, num1[2]={0}, m = 1, min, num2[2]={0}, num[2]={0};

    scanf("%d %d",&n, &k);

    for(i=1;i<=n;i++){
        m *= i;
        while(1){
            if(m%2!=0)break;
            num1[0]++;
            m/=2;
        }
        while(1){
            if(m%5!=0)break;
            num1[1]++;
            m/=5;
        }
        m = 1;
    }

    for(i=1;i<=k;i++){
        m *= i;
        while(1){
            if(m%2!=0)break;
            num2[0]++;
            m/=2;
        }
        while(1){
            if(m%5!=0)break;
            num2[1]++;
            m/=5;
        }
        m = 1;
    }

    num[0] = num1[0] - num2[0];
    num[1] = num1[1] - num2[1];

    min = num[0]<num[1]?num[0]:num[1];

    printf("%d",min);
    return 0;
}