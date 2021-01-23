#include<stdio.h>
/* A2P1 - 写一段程序, 计算下列表达式的值, 并用科学记数法显示计算结果 */

int main() {
	double x, y, s;
	y = 3.31E-8 + 2.10E-7;
	x = 7.16E6 + 2.01E8;
	s = x / y;

	printf("%e\n", s);

	system("pause");
	return 0;
}