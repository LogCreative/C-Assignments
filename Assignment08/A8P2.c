#include <stdio.h>
/* A8P2 - ����һ�����У�����10 ������Ҫ��
��1�����������������
��2����������֮��Ѵ�ָ��λ�ÿ�ʼ��n ���������������������������С�
����ָ����ɡ� */

int main() {
	double num[10];
	int i;
	double* ptr;
	double temp;
	int m,n;
	
	printf("������10�����֣�\n");
	for (i = 0; i < 10; i++) 
		scanf_s("%lf", &num[i]);

	//Problem (1),�������
	for (i = 0; i < 10; i++) {
		ptr = &num[i];//ָ����ʼ
		while (ptr < &num[9]) {//��Խ��
			ptr += 1;
			if (*ptr < num[i]) {//����
				temp = num[i];
				num[i] = *ptr;
				*ptr = temp;
			}
		}
	}
	
	for (i = 0; i < 10; i++)
		printf("%lf ", num[i]);

	//Problem (2),ָ��λ�ÿ�ʼ���

	printf("\n��ʲôλ�ÿ�ʼ��(0-9)��");
	scanf_s("%d", &m);
	printf("������ٸ����أ�");
	scanf_s("%d", &n);
	if (m < 0 || m > 9 || m + n - 1 > 9) {
		printf("Խ�硣\n");
	}
	else {
		ptr = &num[m + n - 1];
		while (ptr >= &num[m]) {
			printf("%lf ", *ptr);
			ptr -= 1;
		}
	}

	return 0;
}