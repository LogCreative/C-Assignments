#include<stdio.h>
#include<math.h>

int main() {
	double f(double x);
	double fderi(double x);
	double x0;
	scanf_s("%lf", &x0);

	double x1 = x0 - (f(x0) / fderi(x0));


	while (abs(x0 - x1) > 1e-12) {
		x0 = x1;
		x1 = x0 - (f(x0) / fderi(x0));
	} 

	printf("%lf", x1);

	return 0;
}

double f(double x) {
	return (2.0 * x * x * x - 4.0 * x * x + 3.0 * x - 6.0);
}

double fderi(double x) {
	return  (6.0 * x * x - 8.0 * x + 3.0);
}