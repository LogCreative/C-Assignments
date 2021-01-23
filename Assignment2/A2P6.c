#include<stdio.h>

int main() {
	double x1, y1, x2, y2, x3, y3;

	printf("请输入第一个点的坐标：");
	scanf_s("%lf %lf", &x1, &y1);
	printf("请输入第二个点的坐标：");
	scanf_s("%lf %lf", &x2, &y2);
	printf("请输入第三个点的坐标：");
	scanf_s("%lf %lf", &x3, &y3);

	/* 采用乘积判定，避免斜率无穷情形 */
	if ((y2 - y1)*(x3 - x2) == (y3 - y2)*(x2 - x1)) 
		printf("这三个点在一条直线上！\n");
	else
		printf("这三个点不在一条直线上！\n");
	system("pause");
	return 0;
}