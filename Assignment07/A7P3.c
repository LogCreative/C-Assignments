#include<stdio.h>
#include<math.h>
/* A7P3 - 如果n 和n+2 都是素数，则称它们是孪生素数。输入m, 输出两个数均不超过m 的最大孪生素数。5 <= m <= 10000 。 */

int main() {
	int m;//搜索最大值
	int n;//搜索中的素数
	int pp1=0, pp2=0;//孪生素数
	int IsPrime(int num);

	printf("搜索上限（5-10000）：");
	scanf_s("%d", &m);

	if (m > 10000 || m < 5) {
		printf("错误！");
	}
	else {
		for (n = 2; n <= m; n++) {
			if (IsPrime(n) == 1 && IsPrime(n + 2) == 1) {
				pp1 = n;
				pp2 = n + 2;
			}
		}

		printf("%d,%d为上限内最大孪生素数对。\n", pp1, pp2);
	}

	return 0;
}

int IsPrime(int num) {
	int i;
	for (i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}