// 그룹 단어 체커
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int alphabets[26]={0}, n, len, i, j, flag=0, cnt=0;
    char word[101];

    scanf("%d",&n);
    getchar();

    for(i=0; i<n;i++){
        for(j=0; j<26;j++)alphabets[j]=0;
        gets(word);
        len=strlen(word);

        for(j=0; j<len;j++){
            if(alphabets[word[j]-'a']==2)break;
            else if(alphabets[word[j]-'a']==1){
                if(j!=len-1&&word[j]!=word[j+1])alphabets[word[j]-'a']=2;
            }
            else if(alphabets[word[j]-'a']==0){
                if(j!=len-1&&word[j]!=word[j+1])alphabets[word[j]-'a']=2;
                else alphabets[word[j]-'a'] = 1;
            }
        }
        if(j==len)cnt++;
    }

    printf("%d\n",cnt);

    return 0;
}