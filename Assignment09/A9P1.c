#include <stdio.h>
#include <stdlib.h>
/* A9P1 - �������飬��������0 ����������ĩβ��������˳�򲻱䣬������� */

int main() {
	int length;
	printf("���������鳤�ȣ�");
	scanf_s("%d", &length);
	int* num = (int*)malloc(length * sizeof(int));

	int i;
	int temp;
	int* ptrl, * ptrr;//��ָ�룬��ָ��
	ptrl = &num[0];
	ptrr = &num[length - 1];
	for (i = 0; i < length; i++) {
		printf("������� %d ������", i + 1);
		scanf_s("%d", &temp);
		if (temp == 0) {
			*ptrr = 0;
			ptrr--;
		}
		else {
			*ptrl = temp;
			ptrl++;
		}
	}
	
	for (i = 0; i < length; i++)
		printf("%d ", num[i]);

	free(num);

	return 0;
}