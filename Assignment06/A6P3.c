#include<stdio.h>

int main() {
	int input;
	
	printf("������С��10000��������");
	scanf_s("%d", &input);

	if (input < 10000) {
		int i;//ѭ���������
		int j;//ѭ���ڲ�����
		int boolean = 1; //����ѭ�����ƿ���,1������
		int first = 0;//�����������ֽ���״γ˺�

		int primecount[2][1230] = { 0 }; //�洢�����б��ο�Assignment 3.5����֪1~10000�ڵ�������1230����
		int pointer = 0;//����λ��
		int primetime = 0;//�����ظ���

		int k;//�������

		printf("%d=", input);
		for (i = 2; i <= input; i++) {
			for (j = 2; j <= i - 1; j++) {//�����ж�ģ��,iһ���ܱ�i����
				if (i % j == 0) {
					boolean = 0;//i��������
					break;
				}
			}
			if (boolean == 1) {//i������
				if (input % i == 0) {//�ܱ�input����
					while (input % i == 0) {
						if (first == 0) {
							printf("%d", i);
							first = 1;
						}
						else {
							printf("*%d", i);
						}
						input = input / i;
						primetime++;
					}
					primecount[0][pointer] = i;
					primecount[1][pointer] = primetime;
					//�ƶ�����λ��
					pointer++;
					//��ʼ��
					primetime = 0;
				}
			}
			boolean = 1;
		}
		
		printf("\n����\t���ִ���\n");
		for (k = 0; k <= pointer - 1; k++) {
			printf("%d \t %d \n", primecount[0][k],primecount[1][k]);
		}
	}
	else {
		printf("������Χ��\n");
	}
}