#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _stuInfo{
    char name[10];
    int score;
}stuinfo;

int main(){
    stuinfo stu[5];
    int i;
    float avg = 0;

    for(i=0; i<5;i++){
        scanf("%s %d",&stu[i].name,&stu[i].score);
        avg += stu[i].score;
    }

    avg /= 5.0;

    for(i=0; i<5; i++)
        if(stu[i].score<avg)
            printf("%s\n",stu[i].name);

    return 0;
}