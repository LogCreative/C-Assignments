#include<stdio.h>
/* Problem 1: �����������չΪn���� */

#define MAXLINE 5  //������������ָ���

int main() {
	int num[MAXLINE]; //��������
	int i; //ѭ������

	for (i = 0; i <= (MAXLINE - 1); ++i) {
		printf("������� %d �����֣�", i + 1);
		scanf_s("%d", &num[i]);
	}

	//���Ĳ���
	int midmax,midmin;
	int j;

	midmax = num[0];
	midmin = num[0];

	for (j = 1; j <= (MAXLINE - 1); ++j) {
		if (midmax <= num[j]) 
			midmax = num[j];
	}

	for (j = 1; j <= (MAXLINE - 1); ++j) {
		if (midmin >= num[j])
			midmin = num[j];
	}

	printf("�������ǣ�%d\n", midmax);
	printf("��С�����ǣ�%d\n", midmin);
	system("pause");
	return 0;
}