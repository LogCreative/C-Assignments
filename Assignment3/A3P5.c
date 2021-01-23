#include<stdio.h>

/* Problem 5: 打印101-200中所有素数 */
int main() {
	int i;
	int j;//循环内层因子
	int count = 0;
	int boolean = 1;

	printf("2 - 10000 中所有素数：\n");
	for (i = 1; i <= 10000; i++) {
		//101 - 200中所有的数皆可被1和本身整除，从2开始
		for (j = 2; j <= i - 1; j++) {
			if (i % j == 0) {
				boolean = 0;
				break;
			}
		}
		if (boolean == 1) {
			printf("%d\n", i);
			count++;
		}
		boolean = 1;
	}
	printf("总计：%d 个素数\n",count);
	system("pause");
	return 0;
}