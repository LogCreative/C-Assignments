#include <stdio.h>

#define MAXLINE 1000

int main() {
	char str[1000] = { 0 }; //�ַ���
	char* ptr = &str[0]; //ָ��

	gets_s(str, MAXLINE); //�����ַ���

	while (*ptr != '\0' && *(ptr + 1) != '\0') {
		putchar(*ptr);
		ptr += 2;
	}

	return 0;
}