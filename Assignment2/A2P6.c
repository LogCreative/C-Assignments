#include<stdio.h>

int main() {
	double x1, y1, x2, y2, x3, y3;

	printf("�������һ��������꣺");
	scanf_s("%lf %lf", &x1, &y1);
	printf("������ڶ���������꣺");
	scanf_s("%lf %lf", &x2, &y2);
	printf("�����������������꣺");
	scanf_s("%lf %lf", &x3, &y3);

	/* ���ó˻��ж�������б���������� */
	if ((y2 - y1)*(x3 - x2) == (y3 - y2)*(x2 - x1)) 
		printf("����������һ��ֱ���ϣ�\n");
	else
		printf("�������㲻��һ��ֱ���ϣ�\n");
	system("pause");
	return 0;
}