#include<stdio.h>
#include<math.h>
/* A4P3 - 一个整数，它加上100 后是一个完全平方数，再加上168 又是一个完全平方数，请问该数是多少. */

#define MAXTEST 235 /* x+100=y^2<2z^2=2x+336 x<236 */

int main() {
	int test;
	int sqrt1, sqrt2; //两个完全平方数的平方根

	printf("满足条件的整数有：\n");
	for (test = -100; test <= MAXTEST; test++) {
		for (sqrt2 = 9; sqrt2 <= sqrt(test + 168.0); sqrt2++) { /* z 不会超过 根号值 */
			for (sqrt1 = 1; sqrt1 < sqrt2; sqrt1++) { /* y 不会超过 z */
				if ((test + 100.0 == pow(sqrt1, 2)) && (test + 168.0 == pow(sqrt2, 2))){
					printf("%d\n", test);
				}
			}
		}
	}
	system("pause");
	return 0;
}