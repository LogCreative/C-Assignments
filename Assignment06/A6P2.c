#include<stdio.h>
/* A6P2 - �Ӽ�������������������ֵ��0~4 �ķ�Χ����-1 ��Ϊ��������ı�־��ͳ��ͬһ�����ĸ����� */

int main() {
	int count[5] = { 0 };
	int input;
	int i;

	do {
		scanf_s("%d", &input);
		switch (input) {
		case 1:
			count[1]++;
			break;
		case 2:
			count[2]++;
			break;
		case 3:
			count[3]++;
			break;
		case 4:
			count[4]++;
			break;
		default:
			count[0]++;
			break;
		}
	} while (input != -1);
	
	printf("����\t�������\n");
	for (i = 1; i <= 4; i++) {
		printf("%d \t%d\n", i, count[i]);
	}

	return 0;
}