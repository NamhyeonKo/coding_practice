#pragma warning(disable:4996)
#include <stdio.h>

int main(){
    int time[1000],N,sum = 0, total = 0;
    int i, j, tmp;

    scanf("%d",&N);

    for(i=0;i<N;i++)scanf("%d",&time[i]);

    for(i=0;i<N-1;i++)
        for(j=0;j<N-1;j++)
            if(time[j]>time[j+1]){
                tmp = time[j];
                time[j] = time[j+1];
                time[j+1] = tmp;
            }
    
    for(i=0;i<N;i++){
        sum += time[i];
        total += sum;
    }

    printf("%d",total);
}