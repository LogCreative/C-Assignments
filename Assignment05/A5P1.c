#include<stdio.h>
/* A5P1 - 编写函数求两个数的最大公约数和最小公倍数 */

int main() {
	int a, b;
	int mida, midb;
	int i;
	int hcf = 1; //最大公因数
	int gcd; //最小公倍数

	printf("请输入两个整数：");
	scanf_s("%d %d", &a, &b);
	mida = a;
	midb = b;

	for (i = 2; i <= min(a, b); i++) { //最大公因数不超过两者的最小值
		while ((mida % i == 0) && (midb % i == 0)) {
			hcf = hcf * i;
			mida = mida / i;
			midb = midb / i;
		}
	}
	gcd = hcf * mida * midb;

	printf("最大公因数为：%d\n", hcf);
	printf("最小公倍数为：%d\n", gcd);
	
	return 0;
}

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int min(int a, int b) {
	if (a > b)
		return b;
	else
		return a;
}