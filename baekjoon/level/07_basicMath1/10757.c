// 큰 수 A+B
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char num1[10001] = {NULL},num2[10001] = {NULL},add[10002] = {NULL};
    char tmp1[10001] = {NULL}, tmp2[10001] = {NULL}, tmp[10002] = {NULL};
    int len, i, len1, len2, r,ten = 0, n1, n2;

    scanf("%s %s",num1,num2);

    len1 = strlen(num1);
    len2 = strlen(num2);

    len = len1>len2?len1:len2;

    for(i=0;i<len;i++){
        if(num1[i]>='0'&&num1[i]<='9') tmp1[i] = num1[len1-i-1];
        else tmp1[i] = '0';
        if(num2[i]>='0'&&num2[i]<='9') tmp2[i] = num2[len2-i-1];
        else tmp2[i] = '0';
    }

    for(i=0;i<len;i++){
        n1 = tmp1[i] - '0';
        n2 = tmp2[i] - '0';
        if(n1+n2+ten>=10){
            tmp[i] = (n1+n2+ten)%10 +'0';
            ten = 1;
        }
        else{
            tmp[i] = (n1+n2+ten)%10 + '0';
            ten = 0;
        }
    }
    if(ten==1)tmp[i]='1';

    len = strlen(tmp);

    for(i=0;i<len;i++)add[i] = tmp[len-i-1];

    printf("%s",add);

    return 0;
}