#include <stdio.h>
#include <stdlib.h>
/* A9P2 - 有n 个人围成一圈，顺序排号。从第一个人开始报数（从1 到3 报数），凡报到3 的人退出圈子，问最后留下的是原来第几号的那位。*/

int main() {
	int n;
	printf("请输入人数：");
	scanf_s("%d", &n);

	int* circle = (int*)malloc(n * sizeof(int));
	int* ptr = &circle[0];
	int i;

	for (i = 1; i <= n; i++) {
		*ptr = i;
		ptr++;
	}

	//开始报数
	int end = 0;//上一次的留存，初始值缺省
	ptr = &circle[0];
	i = 1;

	while (1) {
		if (end == *ptr) {
			break;//和之前一样，结束
		}

		//报数
		if (*ptr != 0) {
			if (i == 3) {
				*ptr = 0;
				i = 1;
			}
			else {
				i++;
				end = *ptr;
			}
		}

		//移位
		if (ptr == &circle[n - 1]) {
			ptr = &circle[0];
		}
		else
			ptr++;
	}

	printf("最后剩下的人是：%d", end);
	free(circle);

	return 0;
}