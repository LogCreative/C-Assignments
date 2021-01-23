#include<stdio.h>
/* A4P4 - 猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第10 天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。 */

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