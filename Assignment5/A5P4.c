#include<stdio.h>

int main() {
	int num;
	printf("������һ��������");
	scanf_s("%d", &num);
	printf("%d=", num);

	/* �̳���˼· */
	/* ����ģ�� */
	int i;
	int j;//ѭ���ڲ�����
	int count = 0;
	int boolean = 1;
	int first = 0;

	for (i = 1; i <= num; i++) {
		for (j = 2; j <= i - 1; j++) {
			if (i % j == 0) {
				boolean = 0;
				break;
			}
		}
		if (boolean == 0) {
			while (num % j == 0) {
				if (first == 0) {
					printf("%d", j);
					first = 1;
					num = num / j;
				}
				else {
					printf("*%d", j);
					num = num / j;
				}
			}
		}
		boolean = 1;
	}
	system("pause");
	return 0;
}