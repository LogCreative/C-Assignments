#include<stdio.h>
#include<math.h>
/* A7P3 - ���n ��n+2 ���������������������������������m, �����������������m ���������������5 <= m <= 10000 �� */

int main() {
	int m;//�������ֵ
	int n;//�����е�����
	int pp1=0, pp2=0;//��������
	int IsPrime(int num);

	printf("�������ޣ�5-10000����");
	scanf_s("%d", &m);

	if (m > 10000 || m < 5) {
		printf("����");
	}
	else {
		for (n = 2; n <= m; n++) {
			if (IsPrime(n) == 1 && IsPrime(n + 2) == 1) {
				pp1 = n;
				pp2 = n + 2;
			}
		}

		printf("%d,%dΪ������������������ԡ�\n", pp1, pp2);
	}

	return 0;
}

int IsPrime(int num) {
	int i;
	for (i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}