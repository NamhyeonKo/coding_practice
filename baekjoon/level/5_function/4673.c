// 셀프 넘버
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int generator(int n){
    int res = n;

    while(n>0){
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main(){
    int d[10000]={0};
    int i, num;

    for(i=1;i<=10000;i++){
        num = generator(i);
        if(num<=10000)d[num-1]=1;
    }

    for(i=1;i<=10000;i++)
        if(d[i-1]==0)printf("%d\n",i);

    return 0;
}