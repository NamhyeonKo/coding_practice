#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void change(char *ar){
    char tmp, *p;

    tmp = *ar;

    for(p=ar;*(p+1);p++){
        *p=*(p+1);
    }

    *p = tmp;
}

int main(){
    char str[101]={NULL};
    int i, len;

    gets(str);
    len = strlen(str);
    for(i=0; i<len; i++){
        printf("%s\n", str);
        change(str);
    }

    return 0;
}