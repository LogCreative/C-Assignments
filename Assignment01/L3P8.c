#include<stdio.h>
/* Problem 8: ��ż�ж�*/

int main() {
	int input;
	printf("������һ��������");
	scanf_s("%d", &input);

	if (input % 2 == 1)
		printf("��������\n");
	else
		printf("��ż����\n");
	
	system("pause");
	return 0;
}