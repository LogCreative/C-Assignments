#include<stdio.h>
#include<math.h>
/* A5P3 - 利用泰勒展开，估计e 的值，保留6 位有效数字 */

int main() {
	double e;
	double plus;
	int i=1;
	e = 1;

	do {
		plus = 1.0 / (factorial(i));
		e = e + plus;
		i++;
	} while (plus >= 0.00001);

	printf("%.5lf", e);
}

int factorial(int i) {
	int n;
	int fact=1;
	for (n = i; n >= 1; n--) {
		fact = fact * n;
	}
	return fact;
}