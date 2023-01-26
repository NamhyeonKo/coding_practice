// 정수 N개의 합
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long sum(int *a, int n){
    long long s=0;
    int i;

    for(i=0;i<n;i++)s+=a[i];

    return s;
}