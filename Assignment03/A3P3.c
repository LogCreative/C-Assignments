#include<stdio.h>
#include<math.h>

int main() {
	int x, y, z;
	int count=0;
	x = 1;
	y = 1;
	z = 1;

	printf("勾股数\n x  y  z \n");
	for (; z <= 50; z++) {
		for (; y <= z; y++) {
			for (; x <= y; x++) {
				if (pow(x, 2) + pow(y, 2) == pow(z, 2)) {
					printf("%2d %2d %2d\n", x, y, z);
					count++;
				}
			}
			x = 1; //变量初始化
		}
		y = 1; //变量初始化
	}
	printf("总计：%d 组\n", count);
	system("pause");
	return 0;
}