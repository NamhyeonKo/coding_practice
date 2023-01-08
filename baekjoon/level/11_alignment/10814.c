// 나이순 정렬
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

char name[100000][101];

int main(){
    int n, age[100000], i, j, tmpAge;
    char tmpName[101];

    scanf("%d",&n);

    for(i=0;i<n;i++)scanf("%d %s",&age[i],name[i]);

    for(i=0;i<n-1;i++)
        for(j=0;j<n-1;j++)
            if(age[j]>age[j+1]){
                tmpAge = age[j];
                age[j] = age[j+1];
                age[j+1] = tmpAge;
                strcpy(tmpName,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],tmpName);
            }

    for(i=0;i<n;i++)printf("%d %s\n",age[i],name[i]);

    return 0;
}