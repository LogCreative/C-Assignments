#include <stdio.h>

#define MAXLINE 1000

int main() {
	char str[1000] = { 0 }; //×Ö·û´®
	char* ptr = &str[0]; //Ö¸Õë

	gets_s(str, MAXLINE); //ÊäÈë×Ö·û´®

	while (*ptr != '\0' && *(ptr + 1) != '\0') {
		putchar(*ptr);
		ptr += 2;
	}

	return 0;
}