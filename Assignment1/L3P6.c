#include<stdio.h>
/* Problem 6: Ӣ��ת��Ϊ���� */

int main() {
	float mile, km;
	
	printf("������Ӣ������");
	scanf_s("%f", &mile);

	km = 1.609344*mile;
	printf("������Ϊ��%f\n",km);

	system("pause");
	return 0;
}