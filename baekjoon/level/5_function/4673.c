#pragma warning(disable:4996)
#include "stdio.h"			// 작거나 같아야함

int d(int num) {
    int temp;

    while (num != 0) {
        temp += num % 10;			// ex) 1 -> 1 + 1 = 2
        num /= 10;
    }
    return temp;				// 2는 생성자
}

int main() {
    int gen, MAX = 10001, i;
    int a[10001] = { 0 };

    for (i = 0; i < MAX; i++) {
        gen = d(i);
        if (gen < MAX) a[gen] = 1;
        // 생성자가 지정한도를 초과하지 않는 경우에 한해 체크
        if (!a[i]) printf("%d\n", i);		// self number들만 출력
    }

    return 0;
}