// 직사각형에서 탈출
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int x, y, w, h, min;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    min = x<y?x:y;

    if(w-x<min)min = w-x;
    if(h-y<min)min = h-y;

    printf("%d",min);

    return 0;
}