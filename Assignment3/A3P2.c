#include<stdio.h>
/* Problem 2 */

int main() {
	int i,count;
	count = 0;

	printf("满足条件的数有：\n");
	for (i = 100; i <= 1000; i++) {
		if ((i % 4 == 2)&&(i % 7 == 3)&&(i % 9 == 5)) {
			count++;
			printf("%d ", i);
		}
	}
	printf("\n总计：%d 个\n", count);
	system("pause");
	return 0;
}