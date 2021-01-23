#include<stdio.h>
/* A2P2 - 利用printf 函数输出计算值 */

int main() {
	printf("%d\n", 1 < 4 && 4 < 7);
	printf("%d\n", !(2 <= 5));
	printf("%d\n", !(1 < 3) || (2 < 5));
	printf("%d\n", !(4 <= 6) && (3 <= 7));

	system("pause");
	return 0;
}