// 좌표 정렬하기
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _coordinate{
    int x, y;
}coordinate;

int main(){
    int n,i,j, tmp_x,tmp_y;
    coordinate arr[100000];

    scanf("%d",&n);

    for(i=0;i<n;i++)scanf("%d %d",&arr[i].x,&arr[i].y);

    for(i=0;i<n-1;i++)
        for(j=0;j<n-1;j++){
            if(arr[j].x>arr[j+1].x){
                tmp_x = arr[j].x;
                arr[j].x = arr[j+1].x;
                arr[j+1].x = tmp_x;
                tmp_y = arr[j].y;
                arr[j].y = arr[j+1].y;
                arr[j+1].y = tmp_y;
            }
            else if(arr[j].y>arr[j+1].y){
                tmp_x = arr[j].x;
                arr[j].x = arr[j+1].x;
                arr[j+1].x = tmp_x;
                tmp_y = arr[j].y;
                arr[j].y = arr[j+1].y;
                arr[j+1].y = tmp_y;
            }
        }

    for(i=0;i<n;i++)printf("%d %d\n",arr[i].x,arr[i].y);

    return 0;
}