// 통계학
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int arr[500000], cnt[500000] = {0};

int main(){
    int n, i, j, tmp, check, max = 0, max_i,max_num;
    int sum = 0, mid, range, manyCnt;
    double avg = 0;

    scanf("%d",&n);

    for(i = 0;i<n;i++) {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    for(i=0;i<n-1;i++)
        for(j=0;j<n-1;j++)
            if(arr[j]>arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
    
    for(i=0;i<n;i++)for(j=0;j<n;j++)if(arr[i]==arr[j])cnt[i]++;
    
    for(i=0;i<n;i++){
        if(cnt[i]>max){
            max = cnt[i];
            max_i = i;
            check = 1;
            max_num = arr[i];
        }
        else if(cnt[i]==max&&arr[i]==max_num)continue;
        else if(cnt[i]==max&&arr[i]!=max_num&&check==1){
            max_i = i;
            max_num = arr[i];
            check = 2;
        }
    }

    avg = (float) sum / n;
    mid = arr[n/2];
    manyCnt = arr[max_i];
    range = arr[n-1] - arr[0];

    printf("%.0f\n%d\n%d\n%d",round(avg)==0?0:round(avg),mid,manyCnt,range);

    return 0;
}