#include<stdio.h>
/* A4P2 - 企业发放的奖金根据利润提成。
* 利润(I) 低于或等于10 万元时，奖金可提10%；
* 利润高于10 万元，低于20 万元时，低于10 万元的部分按10% 提成，高于10 万元的
部分，可提成7.5%；
* 20 万到40 万之间时，高于20 万元的部分，可提成5%；
* 40 万到60 万之间时高于40 万元的部分，可提成3%；
* 60 万到100 万之间时，高于60 万元的部分，可提成1.5%；
* 高于100 万元时，超过100 万元的部分按1% 提成。
从键盘输入当月利润I，求应发放奖金总数？ */

int main() {
	double I;//profit
	double bonus;

	printf("请输入当月利润（万元）：");
	scanf_s("%lf", &I);
	
	double bonus_calc(double profit);

	bonus = bonus_calc(I);
	printf("应发放奖金总数（万元）：%lf\n",bonus);
	system("pause");
	return 0;
}

double bonus_calc(double profit) {
	/* 采用递归算法 */
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