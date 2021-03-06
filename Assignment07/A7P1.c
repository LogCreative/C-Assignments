#include <stdio.h>
/* A7P1 - 编写一个程序，从键盘上输入一篇英文文章。
文章的实际长度随输入变化，最长有10 行，每行有80 多个字符，要求分别统计出其中的字母、数字、空格和其它字符的个数(可以用一
个二维数组存储文章) */

int main() {
	char passage[10][80];//存储文章
	int i, j;
	int alphnum=0, numnum=0, barnum=0, othernum=0;

	//从键盘输入文章
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 79; j++) {
			if ((passage[i][j] = getchar()) == EOF) {
				goto endoffile;
			}
			else {
				if ((passage[i][j] >= '0') && (passage[i][j] <= '9'))
					numnum++;
				else if ((passage[i][j] >= 65 && passage[i][j] <= 90) || (passage[i][j] >= 97 && passage[i][j] <= 122))
					alphnum++;
				else if (passage[i][j] == ' ')
					barnum++;
				else
					othernum++;
			}
		}
	}

//文章结尾
endoffile:
	printf("\n输入的文章：\n");
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 79; j++) {
			if (passage[i][j] == EOF) {
				goto endofoutput;
			}
			else {
				putchar(passage[i][j]);
			}
		}
		printf("\n");
	}
endofoutput:
	printf("\n字母数\t数字数\t空格数\t其他数\n");
	printf("%d\t%d\t%d\t%d\n", alphnum, numnum, barnum, othernum);
	return 0;
}