#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("������������");
	scanf_s("%d", &n);

	int* circle = (int*)malloc(n * sizeof(int));
	int* ptr = &circle[0];
	int i;

	for (i = 1; i <= n; i++) {
		*ptr = i;
		ptr++;
	}

	//��ʼ����
	int end = 0;//��һ�ε����棬��ʼֵȱʡ
	ptr = &circle[0];
	i = 1;

	while (1) {
		if (end == *ptr) {
			break;//��֮ǰһ��������
		}

		//����
		if (*ptr != 0) {
			if (i == 3) {
				*ptr = 0;
				i = 1;
			}
			else {
				i++;
				end = *ptr;
			}
		}

		//��λ
		if (ptr == &circle[n - 1]) {
			ptr = &circle[0];
		}
		else
			ptr++;
	}

	printf("���ʣ�µ����ǣ�%d", end);
	free(circle);

	return 0;
}