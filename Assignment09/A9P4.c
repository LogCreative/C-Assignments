#include<stdio.h>
#include<stdlib.h>
/* A9P4 - ����һ��m*n �ľ����ҵ������ֵ������������±�����±꣨����ж�����ֵ����ȫ���������Ҫ��ʹ��ָ�롣 */

#define MAXLINE 100

int main() {
	int m, n;
	printf("������������");
	scanf_s("%d", &m);
	printf("������������");
	scanf_s("%d", &n);

	int Array[MAXLINE][MAXLINE] = { 0 };
	int i, j;

	//����������ͬʱ�ж�
	int* max = &Array[0][0];
	int maxpos[MAXLINE][2] = { 0 };
	int* maxposptr=&maxpos;//��ֵλ��ָ��
	int count = 0;
	int k;

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf_s("%d", &Array[i][j]);
			if (Array[i][j] >= *max) {
				if (Array[i][j] > * max) {
					for (k = 0; k < MAXLINE; k++) {
						maxpos[k][0] = 0;
						maxpos[k][1] = 0;
					}
					max = &Array[i][j];
					count = 0;
					maxposptr = &maxpos;
				}
				*maxposptr = i;
				*(maxposptr + 1) = j;
				maxposptr = maxposptr + 2;
				count++;
			}
		}
	}

	printf("���ֵ�ǣ�%d", *max);
	printf("\n��\t��");
	for (i = 0; i < count; i++) 
		printf("\n%d\t%d", maxpos[i][0]+1, maxpos[i][1]+1);

	return 0;
}