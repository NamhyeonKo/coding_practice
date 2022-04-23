#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int time[100000][3]={{0}};
    int n, i, j, tmp, cnt=1;

    scanf("%d",&n);

    for(i=0; i<n;i++)scanf("%d %d",&time[i][0],&time[i][1]);

    for(i=0; i<n-1; i++)
        for(j=0; j<n-1; j++)
            if(time[j][1]>time[j+1][1]){
                tmp = time[j][0];
                time[j][0] = time[j+1][0];
                time[j+1][0] = tmp;
                tmp = time[j][1];
                time[j][1] = time[j+1][1];
                time[j+1][1] = tmp;
            }

    int end = time[0][1];

    for(i=0; i<n; i++)
        if(time[i][0]>=end){
            cnt++;
            end = time[i][1];
        }

    printf("%d",cnt);

    return 0;
}