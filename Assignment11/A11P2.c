#include<stdio.h>
#include<string.h>

#define MAXLINE 1000

int main() {

	FILE* fp;
	errno_t err;

	err = fopen_s(&fp,"file.txt", "w");

	char string[MAXLINE] = { 0 };
	int i, count = 0;
	char* input = &string[0];

	printf("ÇëÊäÈë×Ö·û´®£¬ÒÔ£¡½áÊø£º\n");

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