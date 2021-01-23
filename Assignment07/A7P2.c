#include<stdio.h>
/* A7P2 - ��n*n �ķ���������1��2��...��n*n , Ҫ��������Ρ� */

#define MAXLINE 50

int main() {
	int n;//����
	int data[MAXLINE][MAXLINE] = { 0 };//����
	int left, top, right, bottom;//�߽綨�壬ָ�����͵ı߽�ֵ
	int i, j;//��ֵָ��
	int isgn, jsgn;//��������
	int now;//���ڵ�ֵ

	printf("���������������1-%d����",MAXLINE);
	scanf_s("%d", &n);

	if (n > MAXLINE) {
		printf("�����Ͻ硣\n");
	}
	else {
		//��ʼ��
		//�߽�
		left = -1;
		top = -1;
		right = n;
		bottom = n;
		//��ֵָ��
		i = -1;
		j = n - 1;
		//���ڵ�ֵ
		now = 1;
		//��һ���Ĳ���
		isgn = 1;
		jsgn = 0;

		//ѭ��
		while (now <= n * n) {
			//�ƶ�ָ��
			i = i + isgn;
			j = j + jsgn;
			//��ֵ
			data[i][j] = now;

			//�жϡ����򡢸��±߽�
			if (i + isgn >= bottom) {//Ԥ��,�Ƿ񴥵�
				//���½ǣ���һ�������ƶ�
				isgn = 0;
				jsgn = -1;
				right--;//��������
			}
			else if (j + jsgn <= left) {//����
				isgn = -1;
				jsgn = 0;
				bottom--;
			}
			else if (i + isgn <= top) {//����
				isgn = 0;
				jsgn = 1;
				left++;
			}
			else if (j + jsgn >= right) {//����
				isgn = 1;
				jsgn = 0;
				top++;
			}

			now++;//�����������
		}

		for (i = 0; i <= n - 1; i++) {
			for (j = 0; j <= n - 1; j++) {
				printf("%d\t", data[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}