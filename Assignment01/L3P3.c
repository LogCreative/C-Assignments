#include<stdio.h>
/* Problem 3: ������ƽ��ֵ */

int main() {
	int a, b, c, d;
	printf("�������ĸ�������\n");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	printf("ƽ��ֵ�ǣ�%f\n", (a + b + c + d) / 4.0);
	system("pause");
	return 0;
}