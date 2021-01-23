#include<stdio.h>
/* Problem 1: 本程序可以扩展为n个数 */

#define MAXLINE 5  //设置输入的数字个数

int main() {
	int num[MAXLINE]; //定义数组
	int i; //循环变量

	for (i = 0; i <= (MAXLINE - 1); ++i) {
		printf("请输入第 %d 个数字：", i + 1);
		scanf_s("%d", &num[i]);
	}

	//核心部分
	int midmax,midmin;
	int j;

	midmax = num[0];
	midmin = num[0];

	for (j = 1; j <= (MAXLINE - 1); ++j) {
		if (midmax <= num[j]) 
			midmax = num[j];
	}

	for (j = 1; j <= (MAXLINE - 1); ++j) {
		if (midmin >= num[j])
			midmin = num[j];
	}

	printf("最大的数是：%d\n", midmax);
	printf("最小的数是：%d\n", midmin);
	system("pause");
	return 0;
}