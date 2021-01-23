#include<stdio.h>

int main() {
	int x, y, z;
	int count = 0;

	for (x = 1; x <= 4; x++) {
		for (y = 1; y <= 4; y++) {
			for (z = 1; z <= 4; z++) {
				if ((x != y) && (y != z) && (x != z)) {
					printf("%d%d%d\n", x, y, z);
					count++;
				}
			}
		}
	}
	printf("总计：%d 个互不相同且无重复数字的三位数\n",count);
	system("pause");
	return 0;
}