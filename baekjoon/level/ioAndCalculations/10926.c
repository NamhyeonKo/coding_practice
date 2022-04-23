// ??!
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char id[51];

    gets(id);
    printf("%s??!",id);

    return 0;
}