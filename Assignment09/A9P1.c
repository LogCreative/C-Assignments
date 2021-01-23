#include <stdio.h>
#include <stdlib.h>
/* A9P1 - 输入数组，将数组中0 都移至数组末尾，其余项顺序不变，输出数组 */

int main() {
	int length;
	printf("请输入数组长度：");
	scanf_s("%d", &length);
	int* num = (int*)malloc(length * sizeof(int));

	int i;
	int temp;
	int* ptrl, * ptrr;//左指针，右指针
	ptrl = &num[0];
	ptrr = &num[length - 1];
	for (i = 0; i < length; i++) {
		printf("请输入第 %d 个数：", i + 1);
		scanf_s("%d", &temp);
		if (temp == 0) {
			*ptrr = 0;
			ptrr--;
		}
		else {
			*ptrl = temp;
			ptrl++;
		}
	}
	
	for (i = 0; i < length; i++)
		printf("%d ", num[i]);

	free(num);

	return 0;
}