// 크로아티아 알파벳
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char word[101]={NULL};
    int i, len, cnt = 0;

    gets(word);
    len = strlen(word);

    for(i=0; i<len; i++){
        if(word[i]=='c'&&(word[i+1]=='='||word[i+1]=='-'))i++;
        else if(word[i]=='d'&&word[i+1]=='z'&&word[i+2]=='=')i+=2;
        else if(word[i]=='d'&&word[i+1]=='-')i++;
        else if(word[i]=='l'&&word[i+1]=='j')i++;
        else if(word[i]=='n'&&word[i+1]=='j')i++;
        else if(word[i]=='s'&&word[i+1]=='=')i++;
        else if(word[i]=='z'&&word[i+1]=='=')i++;
        
        cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}