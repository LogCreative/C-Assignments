#include <stdio.h>

int main() {
	double num[10];
	int i;
	double* ptr;
	double temp;
	int m,n;
	
	printf("请输入10个数字：\n");
	for (i = 0; i < 10; i++) 
		scanf_s("%lf", &num[i]);

	//Problem (1),升序输出
	for (i = 0; i < 10; i++) {
		ptr = &num[i];//指针起始
		while (ptr < &num[9]) {//不越界
			ptr += 1;
			if (*ptr < num[i]) {//交换
				temp = num[i];
				num[i] = *ptr;
				*ptr = temp;
			}
		}
	}
	
	for (i = 0; i < 10; i++)
		printf("%lf ", num[i]);

	//Problem (2),指定位置开始输出

	printf("\n从什么位置开始呢(0-9)：");
	scanf_s("%d", &m);
	printf("输出多少个数呢：");
	scanf_s("%d", &n);
	if (m < 0 || m > 9 || m + n - 1 > 9) {
		printf("越界。\n");
	}
	else {
		ptr = &num[m + n - 1];
		while (ptr >= &num[m]) {
			printf("%lf ", *ptr);
			ptr -= 1;
		}
	}

	return 0;
}