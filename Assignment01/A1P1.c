#include<stdio.h>
/* A1P1 - 整型数加和程序 */

int notmain() {
	int a, b;

	printf("请输入两个整数：");
	scanf_s("%d %d", &a, &b);
	
	printf("两个数的和为：%d\n", a + b);
	return 0;
}