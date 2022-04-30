#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int arr[3][3] = {0}, i = 0 , j = 0, check = 0, i0, j0, k;
    char command[3]={NULL};

    while(1){
        scanf("%d",&arr[i][j]);
        if(i==0){
            if(j+1!=3){
                i = j + 1;
                j = 0;
            }
            else{
                i = j;
                j = i + 1;
            }
        }
        else if(i==1&&j==2)break;
        else{
            i--;
            j++;
        }
    }

    i = 0;
    j = 0;

    for(i=0;i<3;i++){
        for(j=0;j<2-i;j++)printf(" ");
        for(j=0;j<i+1;j++)printf("*");
        printf("\n");
    }
    for(i=0;i<2;i++){
        for(j)
    }

    i0 = 2;
    j0 = 2;

    while(1){
        check = 0;
        scanf("%s",command);
        if(strcmp(command,"bl")){
            if(arr[0][0]==0||arr[0][1]==0||arr[0][2]==0){
                check = 1;
                break;
            }
            else{
                arr[i0][j0] = arr[i0-1][j0];
                arr[i0-1][j0] = 0;
            }
        }
        else if(strcmp(command,"br")){
            if(arr[0][0]==0||arr[1][0]==0||arr[2][0]==0){
                check = 1;
                break;
            }
            else{
                arr[i0][j0] = arr[i0][j0-1];
                arr[i0][j0-1] = 0;
            }
        }
        else if(strcmp(command,"tl")){
            if(arr[0][2]==0||arr[1][2]==0||arr[2][2]==0){
                check = 1;
                break;
            }
            else{
                arr[i0][j0] = arr[i0][j0+1];
                arr[i0][j0+1] = 0;
            }
        }
        else if(strcmp(command,"tr")){
            if(arr[2][0]==0||arr[2][1]==0||arr[2][2]==0){
                check = 1;
                break;
            }
            else{
                arr[i0][j0] = arr[i0+1][j0];
                arr[i0+1][j0] = 0;
            }
        }

        if(check==1)printf("error");
        else{
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    if(arr[i][j]==0)printf("* ");
                    else printf("%d ",arr[i][j]);
                }
                printf("\n");
            }
        }
        printf("\n");
    }

    return 0;
}