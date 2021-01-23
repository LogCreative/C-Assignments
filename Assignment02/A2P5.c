#include<stdio.h>
/* A2P5 - 凯撒密码是将每个字母循环后移3 个位置后输出 */

int main() {
	char ch;

	printf("请输入一个字母：");
	ch = getchar();

	if ((ch >= 65 && ch <= 87) || (ch >= 97 && ch <= 119)) {
		/* A-W a-w */
		ch = ch + 3;
		printf("加密后的密码为：%c\n", ch);
	}
	else if ((ch >= 88 && ch <= 90)||(ch >= 120 && ch <= 122)){
		/* X-Z x-z */
		ch = ch - 23;
		printf("加密后的密码为：%c\n", ch);
	}
	
	system("pause");
	return 0;
}