#include<stdio.h>
/* A1P2 - ��������Ÿ����� */

int main() {
	int num[9]; //��������
	int i,j;

	printf("������Ÿ�������\n");
	for (i = 0; i < 9; i++) {
		scanf_s("%d", &num[i]);
	}

	printf("\n=======�����=========\n");
	for (j = 0; j <= 6; j = j + 3) {
		printf("%6d %6d %6d\n", num[j], num[j+1], num[j+2]);
	}
	
	system("pause");
	return 0;
}