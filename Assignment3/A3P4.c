#include<stdio.h>
/* Problem 4 */
int main() {
	int year, month, day;
	int dayofmonth[13];
	int i;
	int tempday = 0;

	printf("请输入年：");	scanf_s("%d", &year);
	printf("请输入月：");	scanf_s("%d", &month);
	printf("请输入日：");   scanf_s("%d", &day);

	dayofmonth[0] = 0; //索引对齐，留空
	dayofmonth[1] = 31;		dayofmonth[2] = 28;		dayofmonth[3] = 31;
	dayofmonth[4] = 30;		dayofmonth[5] = 31;		dayofmonth[6] = 30;
	dayofmonth[7] = 31;		dayofmonth[8] = 31;		dayofmonth[9] = 30;
	dayofmonth[10] = 31;	dayofmonth[11] = 30;	dayofmonth[12] = 31;
	//平年预存储

	/* 为减少计算量，当月份为1月时将不判断闰年与否 */
	switch(month) {
		case 1:
			printf("%d 年 %d 月 %d 日为当年第 %d 天。\n", year, month, day, day);
			break;
		case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:
			//防意外输入机制
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
				//闰年判断模块,此处为闰年，闰年2月为29天
				dayofmonth[2] = 29;
			}
			
			for (i = 1; i <= month - 1; i++) {
				tempday = tempday + dayofmonth[i];
			}
			tempday = tempday + day;

			printf("%d 年 %d 月 %d 日为当年第 %d 天。\n", year, month, day, tempday);
			break;
	}
	system("pause");
	return 0;
}