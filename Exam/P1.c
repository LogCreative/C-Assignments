#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char passage[10][80];//�洢����
	int i, j;
	int alphnum = 0, numnum = 0, barnum = 0, othernum = 0;
	FILE* fp;
	char string[800] = { 0 };
	char* ptr = &string[0];
	fp = fopen("file.txt", "r");

	//�Ӽ�����������
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 79; j++) {
			if ((passage[i][j] = getc(fp)) == EOF) {
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

	//���½�β
endoffile:
	printf("\n��������£�\n");
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
	printf("\n��ĸ��\t������\t�ո���\t������\n");
	printf("%d\t%d\t%d\t%d\n", alphnum, numnum, barnum, othernum);
	return 0;
}