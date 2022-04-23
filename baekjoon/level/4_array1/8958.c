// OX퀴즈
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n, i, score, sum;
    char arr[81], *p=NULL;

    scanf("%d",&n);
    getchar();

    for(i=0; i<n; i++){
        gets(arr);
        score = 0;
        sum = 0;
        for(p=arr;*p!=NULL; p++){
            if(*p=='O'){
                score+=1;
                sum+=score;
            }
            else if(*p=='X'){
                score=0;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}