#include<stdio.h>
/* A7P4 -  编写一个程序，输入一个字符串，输出其中每个字符在字母表中的序号。对于不是英文字母的字符，输出0.  */

#define MAXLINE 1000

int main() {
	char input[MAXLINE] = { 0 };
	char* pointer;
	pointer = &input[0];

	gets_s(input,MAXLINE-1);
	while (*pointer != '\0') {
		if (*pointer >= 65 && *pointer <= 90) {
			printf("%d ", (*pointer) - 64);
		}
		else if (*pointer >= 97 && *pointer <= 122) {
			printf("%d ", *pointer - 96);
		}
		else {
			printf("0 ");
		}
		pointer++;
	}

	return 0;
}