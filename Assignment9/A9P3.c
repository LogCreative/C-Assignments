#include <stdio.h>

int main() {
	int evenfactor(int num);
	int n;
	printf("输入需要分解的数字：");
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
	
	printf("\n数组长度：%d", count);

	return 0;
}