#include<stdio.h>
/* A2P4 - �жϸ���ĸ��Ԫ�����Ǹ�����ĸ */

int main() {
	char ch;
	printf("������һ����ĸ��");
	ch = getchar();
	
	/* �� if ��� */
	if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')
		||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')) {
		printf("��if����жϣ�%c ��Ԫ����ĸ��\n",ch);
	}
	else {
		printf("��if����жϣ�%c �Ǹ�����ĸ��\n",ch);
	}

	/* �� switch ��� */
	switch (ch) {
	case 'a':case 'e':case 'i':case 'o':case 'u':
	case 'A':case 'E':case 'I':case 'O':case 'U':
		printf("��switch����жϣ�%c ��Ԫ����ĸ��\n", ch);
		break;
	default:
		printf("��switch����жϣ�%c �Ǹ�����ĸ��\n", ch);
		break;
	}
	system("pause");
	return 0;
}