#include <stdio.h>
/* A9P3 - 编写一个函数, 这个函数的功能是：求出一个整型数的偶数因子，并按从小到大的顺序放到一个数组里，输出数组和数组长度。 */

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