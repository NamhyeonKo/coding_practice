// 단어의 개수
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[1000001]={NULL};
    int i, cnt=0, len=0;

    gets(s);
    len=strlen(s);

    for(i=0; i<len; i++){
        if(i==0&&s[i]!=' ')cnt++;
        else if(s[i]==' '&&((s[i+1]>='a'&&s[i+1]<='z')||(s[i+1]>='A'&&s[i+1]<='Z')))cnt++;
    }

    printf("%d",cnt);

    return 0;
}