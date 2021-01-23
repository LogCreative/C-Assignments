#include<stdio.h>

int main() {
	int input;
	
	printf("请输入小于10000的整数：");
	scanf_s("%d", &input);

	if (input < 10000) {
		int i;//循环外层因子
		int j;//循环内层因子
		int boolean = 1; //素数循环控制开关,1是素数
		int first = 0;//控制素因数分解的首次乘号

		int primecount[2][1230] = { 0 }; //存储素数列表，参考Assignment 3.5，可知1~10000内的素数有1230个。
		int pointer = 0;//数组位置
		int primetime = 0;//素数重复次

		int k;//输出控制

		printf("%d=", input);
		for (i = 2; i <= input; i++) {
			for (j = 2; j <= i - 1; j++) {//素数判断模块,i一定能被i整除
				if (i % j == 0) {
					boolean = 0;//i不是素数
					break;
				}
			}
			if (boolean == 1) {//i是素数
				if (input % i == 0) {//能被input整除
					while (input % i == 0) {
						if (first == 0) {
							printf("%d", i);
							first = 1;
						}
						else {
							printf("*%d", i);
						}
						input = input / i;
						primetime++;
					}
					primecount[0][pointer] = i;
					primecount[1][pointer] = primetime;
					//移动数组位置
					pointer++;
					//初始化
					primetime = 0;
				}
			}
			boolean = 1;
		}
		
		printf("\n素数\t出现次数\n");
		for (k = 0; k <= pointer - 1; k++) {
			printf("%d \t %d \n", primecount[0][k],primecount[1][k]);
		}
	}
	else {
		printf("超出范围。\n");
	}
}