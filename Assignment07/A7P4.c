#include<stdio.h>

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