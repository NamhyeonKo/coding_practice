// 평균은 넘겠지
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int c, n, i, j, cnt;
    int score[1000];
    float avg;
    
    scanf("%d",&c);

    for(i=0; i<c;i++){
        scanf("%d",&n);
        avg = 0;
        cnt = 0;
        for(j=0;j<n;j++){
            scanf("%d",&score[j]);
            avg+=score[j];
        }
        avg /= (float)n;
        for(j=0; j<n; j++)
            if(score[j]>avg) cnt++;
        printf("%.3f%%\n",cnt/(float)n*100);
    }

    return 0;
}