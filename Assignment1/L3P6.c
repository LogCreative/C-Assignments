#include<stdio.h>
/* Problem 6: 英里转化为公里 */

int main() {
	float mile, km;
	
	printf("请输入英里数：");
	scanf_s("%f", &mile);

	km = 1.609344*mile;
	printf("公里数为：%f\n",km);

	system("pause");
	return 0;
}