#include<stdio.h>
/* A1P7 - �����������С */

int main() {
	int num1, num2,num3;

	printf("�������һ������");  scanf_s("%d", &num1); 
	printf("������ڶ�������");  scanf_s("%d", &num2);
	printf("���������������");  scanf_s("%d", &num3);

	printf("\n�������ǣ�%d", max(num1, num2,num3));
	printf("\n��С�����ǣ�%d\n", min(num1, num2, num3));

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