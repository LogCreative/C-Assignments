#include<stdio.h>
/* Problem 3: 四整数平均值 */

int main() {
	int a, b, c, d;
	printf("请输入四个整数：\n");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	printf("平均值是：%f\n", (a + b + c + d) / 4.0);
	system("pause");
	return 0;
}