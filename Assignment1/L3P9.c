#include<stdio.h>
/* Problem 9: ��������״�ж� */

int main() {
	float a, b, c; //���������߳���
	float alpha, beta, gamma; //�Ƕ�����ֵ���ֱ����Ա�

	printf("�����������������ߵĳ��ȣ�");
	scanf_s("%f %f %f", &a, &b, &c);

	//�Ƿ���������
	if ((a + b > c)&(b + c > a)&(a + c > b)) {
		
		//����Ƕ�����ֵ
		alpha = (b*b + c * c - a * a) / (2 * b*c);
		beta = (a*a + c * c - b * b) / (2 * a*c);
		gamma = (a*a + b * b - c * c) / (2 * a*b);

		//�۽��������κ�һ���ǵ�����ֵС��0
		if ((alpha < 0) || (beta < 0) || (gamma < 0))
			printf("����һ���۽������Σ�\n");
		//ֱ���������κ�һ���ǵ�����ֵ����0
		else if ((alpha == 0) || (beta == 0) || (gamma == 0))
			printf("����һ��ֱ�������Σ�\n");
		//������������µ����
		else
			printf("����һ����������Σ�\n");
	}
	else
		printf("�ⲻ�Ǹ������Σ�\n");

	system("pause");
	return 0;
}