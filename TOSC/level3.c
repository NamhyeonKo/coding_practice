#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int onega[6] = { 200,100,150,300,250,400 };
	int baesong[6] = { 100,50,150,250,300,350 };
    int coffee[3][6] ={{0,},};  // coffee[0] -> coffee_num , coffee[1] -> coffee_cnt , coffee[2] -> coffee_price
	
	int num, i ,k, index;
    int max_index, max_baesong=0, sum_baesong=0, cnt = 0, price, total, twoga;
	while (1) {
		scanf("%d", &num);
		if (num == 0)break;

		for (i = 0; i < k; i++)
			if (coffee[0][i] == num)break;

		if (k == i) coffee[0][k++] = num;

		coffee[1][i]++; // coffee_cnt++
        cnt++;
	}

    for(i = 0; i < k; i++){
        index = coffee[0][i] - 1;
        total = onega[index] * 10 * coffee[1][i];

        price = onega[index] * coffee[1][i];

        if(coffee[1][i]>=3)twoga = price * 0.8;
        else if(coffee[1][i]==2) twoga =  price * 0.9;
        else twoga = price ;

        sum_baesong = baesong[index] * coffee[1][i];
        if(sum_baesong>max_baesong){
            max_baesong = sum_baesong;
            max_index = index;
        }
        coffee[2][i] = total - twoga - sum_baesong;
    }

    if(cnt>=5)coffee[2][max_index]+=max_baesong;

    for (i = 0; i < k; i++)printf("%d\n", coffee[2][i]);    // print coffee_price
}