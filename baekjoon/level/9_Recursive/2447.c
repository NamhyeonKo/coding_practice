// 별 찍기 - 10
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void makeHole(char **ar,int istart, int jstart, int n){
    int i, j;
    for(i = istart + (n / 3) ; i < (n / 3) * 2 ; i++)
        for(j = jstart + (n / 3) ; j < (n / 3) * 2 ; j++)
            ar[i][j] = ' ';
    if(n != 3){
        for(i = 0 ; i < n / 3 ; i++)
            for(j = 0 ; j < n / 3 ; j++)
                makeHole(ar, i * 3, j * 3, n / 3);
    }
}

int main(){
    char **arr = NULL;
    int n, i, j;

    scanf("%d",&n);
    arr = malloc((n+1)*sizeof(char*));
    for(i=0;i<n;i++) arr[i] = malloc((n+1)*sizeof(char));

    for(i=0;i<n; i++)for(j=0;j<n; j++)arr[i][j]='*';

    makeHole(arr, 0, 0, n);

    for(i=0;i<n; i++){
        for(j=0;j<n; j++)printf("%c",arr[i][j]);
        printf("\n");
    }

    for(i=0;i<n; i++)free(arr[i]);
    free(arr);

    return 0;
}