// 택시 기하학
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const double pi = 3.14159265358979;

int main(){
    int r;

    scanf("%d",&r);

    printf("%.6lf\n",pi*r*r);
    printf("%.6lf",(double)2*r*r);

    return 0;
}