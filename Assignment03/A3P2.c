#include<stdio.h>
/* A3P2 - 在100-1000 的数之间, 满足被4 除余2, 被7 除余3, 被9 除余5 的数有几个并输出满足条件的数。 */

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