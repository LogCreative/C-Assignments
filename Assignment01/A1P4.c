#include<stdio.h>
#include<math.h>
/* A1P4 - 计算两点之间的距离 */

int main() {
	float x1, y1, x2, y2;
	

	printf("请输入第一个点的x坐标与y坐标：");
	scanf_s("%f %f", &x1, &y1);

	printf("请输入第二个点的x坐标与y坐标：");
	scanf_s("%f %f", &x2, &y2);

	double d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	printf("两点之间的距离是：%f\n", d);

	system("pause");
	return 0;
}