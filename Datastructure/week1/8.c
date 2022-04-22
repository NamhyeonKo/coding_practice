#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _stuInfo{
    char name[8];
    int kor,eng,math;
    float avg;
}stuinfo;

int main(){
    stuinfo *stu=NULL;
    int n, i;

    scanf("%d",&n);

    stu = (stuinfo*)malloc(n*sizeof(stuinfo)*n);

    if(stu==NULL){
        printf("Error");
        return -1;
    }

    for(i=0;i<n;i++){
        scanf("%s %d %d %d",&stu[i].name,&stu[i].kor,&stu[i].eng,&stu[i].math);
        stu[i].avg = stu[i].kor + stu[i].eng + stu[i].math;
        stu[i].avg /= 3.0;
    }

    for(i=0;i<n;i++){
        printf("%s %.1f",stu[i].name,stu[i].avg);
        if(stu[i].kor>=90||stu[i].eng>=90||stu[i].math>=90)printf(" GREAT");
        if(stu[i].kor<70||stu[i].eng<70||stu[i].math<70)printf(" BAD");
        printf("\n");
    }

    free(stu);
    
    return 0;
}