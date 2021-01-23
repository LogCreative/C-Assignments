#include<stdio.h>
#include<math.h>

int main() {
	double a, b, c;

	printf("������ax^2+bx+c=0�е�a,b,c��");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	double delta = b * b - 4 * a * c;
	double root[4];

	if (delta >= 0) {
		root[0] = (-b + sqrt(delta)) / (2 * a);
		root[1] = 0;
		root[2] = (-b - sqrt(delta)) / (2 * a);
		root[3] = 0;
	}
	else {
		root[0] = -b / (2 * a);
		root[1] = sqrt(-delta) / (2 * a);
		root[2] = -b / (2 * a);
		root[3] = -sqrt(-delta) / (2 * a);
	}

	printf("������̵�������Ϊ��\n");
	if (root[1] == 0) {
		printf("%lf, %lf", root[0], root[2]);
	}
	else {
		printf("%lf + %lf i, %lf + %lf i", root[0], root[1], root[2], root[3]);
	}

	return 0;
}