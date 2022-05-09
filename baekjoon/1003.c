// 피보나치 함수
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <stdio.h>

int main(int argc, char* argv[]) {
	int i,N,T;
	int cnt0[41]={1,0,};
	int cnt1[41]={0,1,};
	scanf("%d",&T);
	for(i=2;i<=40;i++){
		cnt0[i]=cnt0[i-2]+cnt0[i-1];
		cnt1[i]=cnt1[i-2]+cnt1[i-1];
	}
	for(i=0;i<T;i++){
		scanf("%d",&N);
		printf("%d %d\n",cnt0[N],cnt1[N]);
	}
	
	printf("\n");
	return 0;
}