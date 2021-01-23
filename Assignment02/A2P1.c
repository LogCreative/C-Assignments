#include<stdio.h>

int main() {
	double x, y, s;
	y = 3.31E-8 + 2.10E-7;
	x = 7.16E6 + 2.01E8;
	s = x / y;

	printf("%e\n", s);

	system("pause");
	return 0;
}