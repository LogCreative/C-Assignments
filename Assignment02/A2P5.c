#include<stdio.h>
/* A2P5 - ���������ǽ�ÿ����ĸѭ������3 ��λ�ú���� */

int main() {
	char ch;

	printf("������һ����ĸ��");
	ch = getchar();

	if ((ch >= 65 && ch <= 87) || (ch >= 97 && ch <= 119)) {
		/* A-W a-w */
		ch = ch + 3;
		printf("���ܺ������Ϊ��%c\n", ch);
	}
	else if ((ch >= 88 && ch <= 90)||(ch >= 120 && ch <= 122)){
		/* X-Z x-z */
		ch = ch - 23;
		printf("���ܺ������Ϊ��%c\n", ch);
	}
	
	system("pause");
	return 0;
}