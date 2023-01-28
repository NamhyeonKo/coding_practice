// 오븐 시계
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int hour, min, time, plus_m, plus_h;

    scanf("%d %d",&hour,&min);
    scanf("%d",&time);

    min += time;

    if(min>=60){
        plus_m = min / 60;
        hour += plus_m;
        min -= plus_m*60;
    }
    if(hour>=24){
        plus_h = hour / 24;
        hour -= plus_h*24;
    }

    printf("%d %d",hour,min);

    return 0;
}