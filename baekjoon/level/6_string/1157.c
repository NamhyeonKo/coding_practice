// 단어 공부
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int alphabets[26]={0}, i, max = -1, len;
    char s[1000001]={NULL}, max_ch;

    gets(s);
    len = strlen(s);

    for(i=0;i<len;i++){
        if(s[i]>='a'&&s[i]<='z')alphabets[s[i]-'a']++;
        else if(s[i]>='A'&&s[i]<='Z')alphabets[s[i]-'A']++;
    }

    for(i=0;i<26;i++){
        if(alphabets[i]>max){
            max = alphabets[i];
            max_ch = i+'A';
        }
        else if(alphabets[i]==max)max_ch = '?';
    }

    printf("%c",max_ch);

    return 0;
}