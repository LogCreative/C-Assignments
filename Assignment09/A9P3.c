#include <stdio.h>
/* A9P3 - ��дһ������, ��������Ĺ����ǣ����һ����������ż�����ӣ�������С�����˳��ŵ�һ������������������鳤�ȡ� */

int main() {
	int evenfactor(int num);
	int n;
	printf("������Ҫ�ֽ�����֣�");
	scanf_s("%d", &n);
	evenfactor(n);
	return 0;
}

int evenfactor(int num) {
	int factorlist[2000] = { 0 };
	int* ptr = &factorlist[0];
	int i, count = 0;

	for (i = 2; i <= num; i = i + 2) {
		if (num % i == 0) {
			*ptr = i;
			ptr++;
			count++;
		}
	}

	for (i = 0; i < count; i++)
		printf("%d ", factorlist[i]);
	
	printf("\n���鳤�ȣ�%d", count);

	return 0;
}