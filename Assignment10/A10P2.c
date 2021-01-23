#include <stdio.h>
#include <math.h>
/* A10P2 - 计算两个日期之间的天数，例如1939.2.28 和1944.7.22 之间的天数. 要求：定义一个全局结构，函数之间用结构变量传递。提示，可以把日期化为日。*/

struct date {
	int year, month, day;
} ;

int main() {
	struct date date1, date2;
	printf("请输入第一个日期：");
	scanf_s("%d %d %d", &date1.year,&date1.month,&date1.day);
	printf("请输入第二个日期：");
	scanf_s("%d %d %d", &date2.year, &date2.month, &date2.day);

	printf("两个日期之间相差：%d天\n",datediff(date1, date2));

}

int datediff(struct date date1, struct date date2) {
	int daydiff = 0;
	int day1, day2;

	return abs((daybeforeyear(date1) + dayofyear(date1) 
		- daybeforeyear(date2) - dayofyear(date2)));
}

int daybeforeyear(struct date date) {
	int tmpyear;
	int leapcount = 0;

	//以1900年为基准，防止溢出

	if (date.year >= 1900) {
		for (tmpyear = 1900; tmpyear < date.year; tmpyear++) {
			if ((date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0)) {
				leapcount++;
			}
		}
	}
	else {
		for (tmpyear = 1900; tmpyear > date.year; tmpyear--) {
			if ((date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0)) {
				leapcount++;
			}
		}
	}
	
	return ((date.year - 1900) * 365 + leapcount);

}

int dayofyear(struct date date) {
	int dayofmonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int i;
	int tempday = 0;
	
	if ((date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0)) {
			//闰年判断模块,此处为闰年，闰年2月为29天
			dayofmonth[2] = 29;
	}

	for (i = 1; i <= date.month - 1; i++) {
		tempday = tempday + dayofmonth[i];
	}
	tempday = tempday + date.day;
	

	return tempday;
}