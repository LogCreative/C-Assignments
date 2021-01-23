#include<stdio.h>
/* Problem 9: 三角形形状判定 */

int main() {
	float a, b, c; //三角形三边长度
	float alpha, beta, gamma; //角度余弦值，分别代表对边

	printf("请输入三角形三个边的长度：");
	scanf_s("%f %f %f", &a, &b, &c);

	//是否是三角形
	if ((a + b > c)&(b + c > a)&(a + c > b)) {
		
		//计算角度余弦值
		alpha = (b*b + c * c - a * a) / (2 * b*c);
		beta = (a*a + c * c - b * b) / (2 * a*c);
		gamma = (a*a + b * b - c * c) / (2 * a*b);

		//钝角条件：任何一个角的余弦值小于0
		if ((alpha < 0) || (beta < 0) || (gamma < 0))
			printf("这是一个钝角三角形！\n");
		//直角条件：任何一个角的余弦值等于0
		else if ((alpha == 0) || (beta == 0) || (gamma == 0))
			printf("这是一个直角三角形！\n");
		//锐角条件：余下的情况
		else
			printf("这是一个锐角三角形！\n");
	}
	else
		printf("这不是个三角形！\n");

	system("pause");
	return 0;
}