#include <stdio.h>
/* A11P3 - ��дһ��������������Լɪ�򻷵����⣨n ����Χ��һȦ, �ӵ�һ���˿�ʼ����1��2��3������3 �ߣ��˳�Ȧ�ӡ��ҳ��������Ȧ�����˵���š������n ������0 ��n-1 ���ʱ, ��n=5 ʱ, ���ʣ�µ��Ǳ��Ϊ3 ���ˣ� */

//��Ҫ�õ��Ĳ�����������ɾ��

#define MAXLINE 1000


struct cell {
	int num;//���
	struct cell* next;
};

int main() {
	int n;
	struct cell cell[MAXLINE];


	//��ʼ��
	printf("������������");
	scanf_s("%d", &n);
	
	int i;
	for (i = 0; i < n - 1; i++) {
		cell[i].num = i;
		cell[i].next = &cell[i + 1];
	}
	cell[n - 1].num = n - 1;
	cell[n - 1].next = &cell[0];

	//�ɻ�

	//����
	struct cell* now = &cell[0];//��������
	struct cell* temp = &cell[n-1];//ǰһ����
	while(now->next != now) {
		for (i = 1; i <= 3; i++) {
			if (i == 3) {
				//����ǰһ����
				temp->next = ((temp->next)->next);
				//ǰһ���˲���
				//��һ����Ϊ���¸���
				now = now->next;
			}
			else {
				//�洢������Ϊǰһ����
				temp = now;
				//�洢��һ������Ϊ����
				now = now->next;
			}
		}
	}

	printf("%d", now->num);
}