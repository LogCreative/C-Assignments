#include<stdio.h>

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