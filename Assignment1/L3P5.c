#include<stdio.h>
/* Problem 5: ˮ���ۻ��� */

int main() {
	float apple, pear, banana, orange;
	
	printf("\n��ӭ���٣�\n\n======ˮ��������======\n");
	printf("ƻ���� ");  scanf_s("%f", &apple);
	printf("�㽶�� ");  scanf_s("%f", &banana); 
	printf("Ѽ�棺 ");  scanf_s("%f", &pear);
	printf("���ӣ� ");  scanf_s("%f", &orange);

	float price = apple * 2.50 + pear * 1.80 + banana * 2.00 + orange * 1.60;
	float pay;
	printf("\n=========����=========\nӦ����Ԫ����%.2f",price);
	printf("\nʵ����Ԫ����");  scanf_s("%f", &pay); 
	printf("\n���㣨Ԫ����%.2f", pay - price);
	printf("\n\n��ӭ�´ι��٣�\n\n");
	
	system("pause");
	return 0;
}