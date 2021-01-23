#include <stdio.h>

struct complex_number {
	double Re; //实部
	double Im; //虚部
};

int main() {

	struct complex_number complex1, complex2, complexadd, complexmulti;

	void complex_input(struct complex_number *complex);
	void complex_output(struct complex_number complex);
	void complex_addition(struct complex_number complex1,
		struct complex_number complex2, struct complex_number *complex_output);
	void complex_multi(struct complex_number complex1,
		struct complex_number complex2, struct complex_number *complex_output);

	complex1.Re = 0;
	complex1.Im = 0;
	complex2.Re = 0;
	complex2.Im = 0;
	complexadd.Re = 0;
	complexadd.Im = 0;
	complexmulti.Re = 0;
	complexmulti.Im = 0;

	complex_input(&complex1);
	complex_input(&complex2);
	complex_addition(complex1, complex2, &complexadd);
	complex_multi(complex1, complex2, &complexmulti);

	printf("两个复数相加等于：");
	complex_output(complexadd);
	printf("\n");

	printf("两个复数相乘等于：");
	complex_output(complexmulti);
	printf("\n");

}

void complex_input(struct complex_number *complex) {
	printf("输入复数实部：");
	scanf_s("%lf", &(*complex).Re);
	printf("输入复数虚部：");
	scanf_s("%lf", &(*complex).Im);
}

void complex_output(struct complex_number complex) {
	printf("%lf + %lf i", complex.Re, complex.Im);
}

void complex_addition(struct complex_number complex1, 
	struct complex_number complex2, struct complex_number *complex_output) {
	(*complex_output).Re = complex1.Re + complex2.Re;
	(*complex_output).Im = complex1.Im + complex2.Im;
}

void complex_multi(struct complex_number complex1,
	struct complex_number complex2, struct complex_number *complex_output) {
	(*complex_output).Re = complex1.Re * complex2.Re - complex1.Im * complex2.Im;
	(*complex_output).Im = complex1.Im * complex2.Re + complex1.Re * complex2.Im;
}