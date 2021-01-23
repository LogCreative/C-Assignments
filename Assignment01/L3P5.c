#include<stdio.h>
/* Problem 5: 水果售货机 */

int main() {
	float apple, pear, banana, orange;
	
	printf("\n欢迎光临！\n\n======水果的重量======\n");
	printf("苹果： ");  scanf_s("%f", &apple);
	printf("香蕉： ");  scanf_s("%f", &banana); 
	printf("鸭梨： ");  scanf_s("%f", &pear);
	printf("橘子： ");  scanf_s("%f", &orange);

	float price = apple * 2.50 + pear * 1.80 + banana * 2.00 + orange * 1.60;
	float pay;
	printf("\n=========交易=========\n应付（元）：%.2f",price);
	printf("\n实付（元）：");  scanf_s("%f", &pay); 
	printf("\n找零（元）：%.2f", pay - price);
	printf("\n\n欢迎下次光临！\n\n");
	
	system("pause");
	return 0;
}