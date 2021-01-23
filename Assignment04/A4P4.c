#include<stdio.h>

int main() {
	int n; //天数
	int peach=1;

	for (n = 9; n >= 1; n--) {
		peach = (peach + 1) * 2;
	}
	printf("原来有 %d 个桃子\n", peach);
	system("pause");
	return 0;
}