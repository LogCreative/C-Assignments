#include<stdio.h>

int main() {
	double I;//profit
	double bonus;

	printf("�����뵱��������Ԫ����");
	scanf_s("%lf", &I);
	
	double bonus_calc(double profit);

	bonus = bonus_calc(I);
	printf("Ӧ���Ž�����������Ԫ����%lf\n",bonus);
	system("pause");
	return 0;
}

double bonus_calc(double profit) {
	/* ���õݹ��㷨 */
	if (profit <= 10) 
		return profit * 0.1;
	else if ((profit > 10) && (profit <= 20)) 
		return bonus_calc(10.0) + (profit - 10)*0.075;
	else if ((profit > 20) && (profit <= 40)) 		
		return bonus_calc(20.0) + (profit - 20)*0.05;
	else if ((profit > 40) && (profit <= 60)) 
		return bonus_calc(40.0) + (profit - 40)*0.03;
	else if ((profit > 60) && (profit <= 100)) 
		return bonus_calc(60.0) + (profit - 60)*0.015;
	else 
		return bonus_calc(100.0) + (profit - 100)*0.01;
}