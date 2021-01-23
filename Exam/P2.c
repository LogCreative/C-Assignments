#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAXLINE 1000

int main() {

	FILE* fp;
	FILE* fp1;
	fp = fopen("file.txt", "w");
	fp1 = fopen("filein.txt", "r");

	char input;
	int count = 0;
	int i;

	for (i = 0; i < MAXLINE; i++) {
		input = fgetc(fp1);
		if (input == '!') {
			count = i;
			break;
		}
		if (input >= 97 && input <= 122) {
			input -= 32;
		}

		putc(input, fp);

	}

	fclose(fp);
	fclose(fp1);

	return 0;
}