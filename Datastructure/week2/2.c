// 비트행렬에서 최대 1행 찾기
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mostOnes(int **A,int n){
    int i = 0, j = 0, max_index = 0;
    
    while(i<n&&j<n){
        if(A[i][j] == 1){
            max_index = i;
            j++;
        }
        else{
            i++;
        }
    }
    return max_index;
}

int main(){
    int **arr, n, i, j;

    scanf("%d",&n);

    arr = (int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++)arr[i] = (int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&arr[i][j]);

    printf("%d",mostOnes(arr,n));

    for(i=0;i<n;i++)free(arr[i]);
    free(arr);

    return 0;
}

/*8
1 1 1 1 0 0 0 0 
1 1 1 1 1 0 0 0
1 0 0 0 0 0 0 0
1 1 1 1 1 1 0 0
1 1 1 1 0 0 0 0
0 0 0 0 0 0 0 0
1 1 1 1 1 1 1 0
1 1 1 1 1 0 0 0*/