#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _time{
    int hour,min,sec;
}time;

int main(){
    time a , b, c;

    scanf("%d %d %d",&a.hour,&a.min,&a.sec);
    scanf("%d %d %d",&b.hour,&b.min,&b.sec);

    c.hour = b.hour - a.hour;
    c.min = b.min - a.min;
    c.sec = b.sec - a.sec;

    if(c.sec<0){
        c.sec += 60;
        c.min -= 1;
    }
    if(c.min<0){
        c.min += 60;
        c.hour -= 1;
    }

    printf("%d %d %d",c.hour,c.min,c.sec);

    return 0;
}