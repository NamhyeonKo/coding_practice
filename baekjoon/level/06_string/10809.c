// 알파벳 찾기
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[101]={NULL};
    int alphabets[26]={0}, i;

    for(i=0;i<26;i++)alphabets[i]=-1;

    gets(s);

    for(i=0;s[i]!=NULL;i++)if(alphabets[s[i]-'a']==-1)alphabets[s[i]-'a']=i;

    for(i=0;i<26;i++)printf("%d ",alphabets[i]);

    return 0;
}