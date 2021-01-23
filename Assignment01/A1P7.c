#include<stdio.h>
/* A1P7 - 三数最大与最小 */

int main() {
	int num1, num2,num3;

	printf("请输入第一个数：");  scanf_s("%d", &num1); 
	printf("请输入第二个数：");  scanf_s("%d", &num2);
	printf("请输入第三个数：");  scanf_s("%d", &num3);

	printf("\n最大的数是：%d", max(num1, num2,num3));
	printf("\n最小的数是：%d\n", min(num1, num2, num3));

	system("pause");
	return 0;
}

int max(int x, int y, int z) {
	int midmax;
	x > y ? (midmax = x) : (midmax = y);
	if (midmax <= z)
		midmax = z;
	return midmax;
}

int min(int x, int y, int z) {
	int midmin;
	x > y ? (midmin = y) : (midmin = x);
	if (midmin >= z)
		midmin = z;
	return midmin;
}