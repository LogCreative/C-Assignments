#include<stdio.h>
/* A5P1 - ��д�����������������Լ������С������ */

int main() {
	int a, b;
	int mida, midb;
	int i;
	int hcf = 1; //�������
	int gcd; //��С������

	printf("����������������");
	scanf_s("%d %d", &a, &b);
	mida = a;
	midb = b;

	for (i = 2; i <= min(a, b); i++) { //����������������ߵ���Сֵ
		while ((mida % i == 0) && (midb % i == 0)) {
			hcf = hcf * i;
			mida = mida / i;
			midb = midb / i;
		}
	}
	gcd = hcf * mida * midb;

	printf("�������Ϊ��%d\n", hcf);
	printf("��С������Ϊ��%d\n", gcd);
	
	return 0;
}

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int min(int a, int b) {
	if (a > b)
		return b;
	else
		return a;
}