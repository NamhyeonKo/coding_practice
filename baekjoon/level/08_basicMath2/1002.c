// 터렛
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x1,y1,r1,x2,y2,r2, n, i, x ,y;
    float d;

    scanf("%d",&n);

    for(i=0; i<n;i++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        x = x1-x2;
        y = y1-y2;
        d = sqrt(x*x+y*y);

        if(d<=r1||d<=r2){
            if(d==0&&r1==r2)cnt=-1;
            else if(abs(r1-r2)>d)cnt=2;
            else if(abs(r1-r2)==d)cnt=1;
            else if(abs(r1-r2)==)
        }
    }
    

    return 0;
}