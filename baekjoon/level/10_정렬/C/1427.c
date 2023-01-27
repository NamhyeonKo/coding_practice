// 소트인사이드
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char num[10];

int main(){
    int i, j, len;
    char tmp;

    gets(num);
    len = strlen(num);

    for(i=0;i<len-1;i++)
        for(j=0;j<len-1;j++)
            if(num[j]<num[j+1]){
                tmp = num[j];
                num[j] = num[j+1];
                num[j+1] = tmp;
            }
    
    puts(num);

    return 0;
}