// 설탕 배달
#pragma warning(disable: 4996)
#include <stdio.h>

int main(){
    int N;
    int cnt = 0, five, three = 0;

    scanf("%d",&N);

    five = N / 5 + 1;

    while(1){
        five--;
        three = (N - five*5) / 3;

        if(five*5+three*3==N){
            cnt = five + three;
            printf("%d",cnt);
            break;
        }
        else if(five <= 0){
            printf("-1");
            return 0;
        }
    }    
}