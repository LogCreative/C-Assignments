#include<stdio.h>
#include<math.h>
/* A4P3 - һ��������������100 ����һ����ȫƽ�������ټ���168 ����һ����ȫƽ���������ʸ����Ƕ���. */

#define MAXTEST 235 /* x+100=y^2<2z^2=2x+336 x<236 */

int main() {
	int test;
	int sqrt1, sqrt2; //������ȫƽ������ƽ����

	printf("���������������У�\n");
	for (test = -100; test <= MAXTEST; test++) {
		for (sqrt2 = 9; sqrt2 <= sqrt(test + 168.0); sqrt2++) { /* z ���ᳬ�� ����ֵ */
			for (sqrt1 = 1; sqrt1 < sqrt2; sqrt1++) { /* y ���ᳬ�� z */
				if ((test + 100.0 == pow(sqrt1, 2)) && (test + 168.0 == pow(sqrt2, 2))){
					printf("%d\n", test);
				}
			}
		}
	}
	system("pause");
	return 0;
}