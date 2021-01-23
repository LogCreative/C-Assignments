#include<stdio.h>
#include<string.h>
/* A11P2 - 从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文
件"file.txt" 中保存。输入的字符串以！结束。
 */

#define MAXLINE 1000

int main() {

	FILE* fp;
	errno_t err;

	err = fopen_s(&fp,"file.txt", "w");

	char string[MAXLINE] = { 0 };
	int i, count = 0;
	char* input = &string[0];

	printf("请输入字符串，以！结束：\n");

	for (i = 0; i < MAXLINE; i++) {
		*input = getchar();
		if (*input == '!') {
			count = i;
			break;
		}
		if (*input >= 97 && *input <= 122) {
			*input -= 32;
		}

		putc(*input, fp);
		input++;

	}

	fclose(fp);

	return 0;
}