// ACM 호텔
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t,h,w,n, i, room;

    scanf("%d",&t);

    for(i=0; i<t;i++){
        scanf("%d %d %d",&h,&w,&n);
        if(n%h==0){
            room = h;
            room *= 100;
            room += n/h;
        }
        else{
            room = n % h;
            room *= 100;
            room += n/h + 1;
        }
        printf("%d\n",room);
    }

    return 0;
}