// 다이얼
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char word[16]={NULL};
    int sum=0, t, i, len;

    gets(word);
    len = strlen(word);

    for(i=0;i<len;i++){
        if(word[i]>='A'&&word[i]<='C')t=3;
        else if(word[i]>='D'&&word[i]<='F')t=4;
        else if(word[i]>='G'&&word[i]<='I')t=5;
        else if(word[i]>='J'&&word[i]<='L')t=6;
        else if(word[i]>='M'&&word[i]<='O')t=7;
        else if(word[i]>='P'&&word[i]<='S')t=8;
        else if(word[i]>='T'&&word[i]<='V')t=9;
        else if(word[i]>='W'&&word[i]<='Z')t=10;
        sum+=t;
    }

    printf("%d",sum);

    return 0;
}