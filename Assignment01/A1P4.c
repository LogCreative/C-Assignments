#include<stdio.h>
#include<math.h>
/* A1P4 - ��������֮��ľ��� */

int main() {
	float x1, y1, x2, y2;
	

	printf("�������һ�����x������y���꣺");
	scanf_s("%f %f", &x1, &y1);

	printf("������ڶ������x������y���꣺");
	scanf_s("%f %f", &x2, &y2);

	double d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	printf("����֮��ľ����ǣ�%f\n", d);

	system("pause");
	return 0;
}