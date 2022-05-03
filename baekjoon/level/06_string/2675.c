// 문자열 반복
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t, r, i, j, k;
    char s[21]={NULL};

    scanf("%d",&t);

    for(i=0; i<t;i++){
        scanf("%d %s",&r,s);
        for(j=0;s[j]!=NULL;j++)
            for(k=0;k<r;k++)printf("%c",s[j]);
        printf("\n");
    }

    return 0;
}