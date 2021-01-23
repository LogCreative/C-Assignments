#include<stdio.h>
/* A2P4 - 判断该字母是元音还是辅音字母 */

int main() {
	char ch;
	printf("请输入一个字母：");
	ch = getchar();
	
	/* 用 if 语句 */
	if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')
		||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')) {
		printf("用if语句判断：%c 是元音字母！\n",ch);
	}
	else {
		printf("用if语句判断：%c 是辅音字母！\n",ch);
	}

	/* 用 switch 语句 */
	switch (ch) {
	case 'a':case 'e':case 'i':case 'o':case 'u':
	case 'A':case 'E':case 'I':case 'O':case 'U':
		printf("用switch语句判断：%c 是元音字母！\n", ch);
		break;
	default:
		printf("用switch语句判断：%c 是辅音字母！\n", ch);
		break;
	}
	system("pause");
	return 0;
}