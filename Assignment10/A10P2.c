#include <stdio.h>
#include <math.h>
/* A10P2 - ������������֮�������������1939.2.28 ��1944.7.22 ֮�������. Ҫ�󣺶���һ��ȫ�ֽṹ������֮���ýṹ�������ݡ���ʾ�����԰����ڻ�Ϊ�ա�*/

struct date {
	int year, month, day;
} ;

int main() {
	struct date date1, date2;
	printf("�������һ�����ڣ�");
	scanf_s("%d %d %d", &date1.year,&date1.month,&date1.day);
	printf("������ڶ������ڣ�");
	scanf_s("%d %d %d", &date2.year, &date2.month, &date2.day);

	printf("��������֮����%d��\n",datediff(date1, date2));

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

	//��1900��Ϊ��׼����ֹ���

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
			//�����ж�ģ��,�˴�Ϊ���꣬����2��Ϊ29��
			dayofmonth[2] = 29;
	}

	for (i = 1; i <= date.month - 1; i++) {
		tempday = tempday + dayofmonth[i];
	}
	tempday = tempday + date.day;
	

	return tempday;
}