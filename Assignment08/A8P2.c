#include <stdio.h>
/* A8P2 - 设有一个数列，包含10 个数，要求
（1）按升序排序并输出；
（2）升序排列之后把从指定位置开始的n 个数按逆序重新排序并输出完成数列。
请用指针完成。 */

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