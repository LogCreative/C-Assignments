#include<stdio.h>
#include<stdlib.h>


int main() {
	int MAXLINE;
	printf("��������Ҫ�����������Ŀ��");
	scanf_s("%d", &MAXLINE);

	double* num = (double*)malloc(MAXLINE * sizeof(int));
	double* ptr = &num[0];//���롢�Ƚ�ָ��
	double* ptrbig = &num;//�����ָ��,�Ƚϴӵ�2����ʼ
	double* ptrsmall = &num;//��С��ָ��
	
	//����

	printf("������%d������\n",MAXLINE);
	while (ptr < &num[MAXLINE]) {
		scanf_s("%lf", ptr);
		ptr++;
	}
	
	//�Ƚ�
	
	//ȷ�����ֵ����Сֵ
	ptr = &num[0];//��ʼ��
	while (ptr < &num[MAXLINE]) {
		if (*ptr > * ptrbig) {
			ptrbig = ptr;
		}
		if (*ptr < *ptrsmall) {
			ptrsmall = ptr;
		}
		ptr++;
	}

	//����

	double temp;
	temp = num[0];
	num[0] = *ptrbig;
	*ptrbig = temp;

	temp = num[MAXLINE - 1];
	num[MAXLINE - 1] = *ptrsmall;
	*ptrsmall = temp;

	//���
	ptr = &num[0];
	while (ptr < &num[MAXLINE]) {
		printf("%lf ", *ptr);
		ptr++;
	}
	
	free(num);
	return 0;
}