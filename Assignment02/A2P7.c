#include<stdio.h>
#include<math.h>
/* A2P7 - �����άƽ���ϵľ���������ܳ� */

int main() {
	float x1, y1, x2, y2, x3, y3, x4, y4;
	double L,W;
	double V1, V2, V3;//ֱ���ж�

	//���ݲɼ�
	printf("�����һ�����꣺"); scanf_s("%f %f", &x1, &y1);
	printf("����ڶ������꣺"); scanf_s("%f %f", &x2, &y2);
	printf("������������꣺"); scanf_s("%f %f", &x3, &y3);
	printf("������ĸ����꣺"); scanf_s("%f %f", &x4, &y4);

	//�����ж�
	V1 = (x2 - x1)*(x4 - x1) + (y2 - y1)*(y4 - y1);
	V2 = (x2 - x1)*(x3 - x2) + (y2 - y1)*(y3 - y2);
	V3 = (x2 - x3)*(x3 - x4) + (y2 - y3)*(y3 - y4);

	if ((V1 == 0)&&(V2 == 0)&&(V3 == 0)) {
		//�Ǿ���
		L = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		W = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
		printf("����һ�����Ρ�\n�ܳ�Ϊ %f\n���Ϊ %f\n", 2 * (L + W), L * W);
	}
	else {
		printf("�ⲻ��һ�����Ρ�");
	}


	system("pause");
	return 0;

}