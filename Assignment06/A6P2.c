#include<stdio.h>
/* A6P2 - 从键盘输入若干整数，其值在0~4 的范围，用-1 作为输入结束的标志；统计同一整数的个数。 */

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
	
	printf("数字\t输入个数\n");
	for (i = 1; i <= 4; i++) {
		printf("%d \t%d\n", i, count[i]);
	}

	return 0;
}