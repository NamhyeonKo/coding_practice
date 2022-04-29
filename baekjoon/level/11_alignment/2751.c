// 수 정렬하기 2
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int arrp[1000001], arrm[1000000];

int main(){
    int n, i, k;

    scanf("%d",&n);

    for(i=0; i<n;i++){
        scanf("%d",&k);
        if(k>=0)arrp[k] = 1;
        else arrm[1000000 + k] = 1;
    }

    for(i=0; i<1000000; i++) if(arrm[i]==1) printf("%d\n",i-1000000);
    for(i=0; i<1000001; i++) if(arrp[i]==1) printf("%d\n",i);

    return 0;

    // 이런식으로 푸는거는 확실히 비효율적임 -> oj에서 겁나 오래걸리는 듯 -> 372ms
    // 따라서 힙 정렬 또는 합병 정렬로 풀어보기 꼭!
}