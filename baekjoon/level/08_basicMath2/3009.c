// 네 번째 점
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int ax, ay, bx, by, cx, cy, resx, resy;

    scanf("%d %d",&ax,&ay);
    scanf("%d %d",&bx,&by);
    scanf("%d %d",&cx,&cy);

    resx = ax == bx ? cx : bx == cx ? ax : bx;
    resy = ay == by ? cy : by == cy ? ay : by;

    printf("%d %d",resx,resy);

    return 0;
}