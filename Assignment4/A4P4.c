#include<stdio.h>

int main() {
	int n; //����
	int peach=1;

	for (n = 9; n >= 1; n--) {
		peach = (peach + 1) * 2;
	}
	printf("ԭ���� %d ������\n", peach);
	system("pause");
	return 0;
}