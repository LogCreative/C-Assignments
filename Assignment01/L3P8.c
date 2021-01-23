#include<stdio.h>
/* Problem 8: 奇偶判定*/

int main() {
	int input;
	printf("请输入一个整数：");
	scanf_s("%d", &input);

	if (input % 2 == 1)
		printf("是奇数！\n");
	else
		printf("是偶数！\n");
	
	system("pause");
	return 0;
}