#include<stdio.h>
/* A3P2 - ��100-1000 ����֮��, ���㱻4 ����2, ��7 ����3, ��9 ����5 �����м���������������������� */

int main() {
	int i,count;
	count = 0;

	printf("�������������У�\n");
	for (i = 100; i <= 1000; i++) {
		if ((i % 4 == 2)&&(i % 7 == 3)&&(i % 9 == 5)) {
			count++;
			printf("%d ", i);
		}
	}
	printf("\n�ܼƣ�%d ��\n", count);
	system("pause");
	return 0;
}