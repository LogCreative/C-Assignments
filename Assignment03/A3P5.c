#include<stdio.h>

/* Problem 5: ��ӡ101-200���������� */
int main() {
	int i;
	int j;//ѭ���ڲ�����
	int count = 0;
	int boolean = 1;

	printf("2 - 10000 ������������\n");
	for (i = 1; i <= 10000; i++) {
		//101 - 200�����е����Կɱ�1�ͱ�����������2��ʼ
		for (j = 2; j <= i - 1; j++) {
			if (i % j == 0) {
				boolean = 0;
				break;
			}
		}
		if (boolean == 1) {
			printf("%d\n", i);
			count++;
		}
		boolean = 1;
	}
	printf("�ܼƣ�%d ������\n",count);
	system("pause");
	return 0;
}