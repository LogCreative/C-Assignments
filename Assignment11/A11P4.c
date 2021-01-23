#include<stdio.h>
/* A11P4 - �Զ���һ��rationalT, ������ʾһ��������������CreateRational(num,den) ����һ��
rationalT ���͵�ֵ, ����ֱ����������������, ��˵ĺ�����
*/

struct rationalT {
	int num;//����
	int den;//��ĸ
};

typedef struct rationalT rational;

int main() {
	struct rationalT rational1, rational2, rationalAdd, rationalMulti;
	int num1, den1, num2, den2;
	rational CreateRational(int num, int den);
	rational RationalAddition(struct rationalT rational1, struct rationalT rational2);
	rational RationalMultiplication(struct rationalT rational1, struct rationalT rational2);
	rational RationalSimplify(rational rationalobj);
	int min(int a, int b);


	printf("�������һ���������ķ��ӣ�");
	scanf_s("%d", &num1);
	printf("�������һ���������ķ�ĸ��");
	scanf_s("%d", &den1);

	printf("������ڶ����������ķ��ӣ�");
	scanf_s("%d", &num2);
	printf("������ڶ����������ķ�ĸ��");
	scanf_s("%d", &den2);

	rational1 = CreateRational(num1, den1);
	rational2 = CreateRational(num2, den2);

	rationalAdd = RationalSimplify(RationalAddition(rational1, rational2));
	rationalMulti = RationalSimplify(RationalMultiplication(rational1, rational2));
	printf("�������ӵĺͣ�%d / %d\n", rationalAdd.num,rationalAdd.den);
	printf("�������ӵĻ���%d / %d\n", rationalMulti.num,rationalMulti.den);

	return 0;
}

rational CreateRational(int num, int den) {
	struct rationalT create;
	create.num = num;
	create.den = den;
	return create;
}

rational RationalAddition(struct rationalT rational1, struct rationalT rational2) {
	struct rationalT rationalAdd;
	rationalAdd.den = rational1.den * rational2.den;
	rationalAdd.num = rational1.num * rational2.den + rational2.num * rational1.den;
	return rationalAdd;
}

rational RationalMultiplication(struct rationalT rational1, struct rationalT rational2) {
	struct rationalT rationalMulti;
	rationalMulti.den = rational1.den * rational2.den;
	rationalMulti.num = rational1.num * rational2.num;
	return rationalMulti;
}

rational RationalSimplify(rational rationalobj) {
	int i, mida, midb, hcf=1;
	struct rationalT Simplified;
	mida = rationalobj.num;
	midb = rationalobj.den;

	for (i = 2; i <= min(mida, midb); i++) { //����������������ߵ���Сֵ
		while ((mida % i == 0) && (midb % i == 0)) {
			hcf = hcf * i;
			mida = mida / i;
			midb = midb / i;
		}
	}

	Simplified.num = mida;
	Simplified.den = midb;
	return Simplified;
}

int min(int a, int b) {
	if (a > b)
		return b;
	else
		return a;
}