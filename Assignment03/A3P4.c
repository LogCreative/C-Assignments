#include<stdio.h>
/* Problem 4 */
int main() {
	int year, month, day;
	int dayofmonth[13];
	int i;
	int tempday = 0;

	printf("�������꣺");	scanf_s("%d", &year);
	printf("�������£�");	scanf_s("%d", &month);
	printf("�������գ�");   scanf_s("%d", &day);

	dayofmonth[0] = 0; //�������룬����
	dayofmonth[1] = 31;		dayofmonth[2] = 28;		dayofmonth[3] = 31;
	dayofmonth[4] = 30;		dayofmonth[5] = 31;		dayofmonth[6] = 30;
	dayofmonth[7] = 31;		dayofmonth[8] = 31;		dayofmonth[9] = 30;
	dayofmonth[10] = 31;	dayofmonth[11] = 30;	dayofmonth[12] = 31;
	//ƽ��Ԥ�洢

	/* Ϊ���ټ����������·�Ϊ1��ʱ�����ж�������� */
	switch(month) {
		case 1:
			printf("%d �� %d �� %d ��Ϊ����� %d �졣\n", year, month, day, day);
			break;
		case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:
			//�������������
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
				//�����ж�ģ��,�˴�Ϊ���꣬����2��Ϊ29��
				dayofmonth[2] = 29;
			}
			
			for (i = 1; i <= month - 1; i++) {
				tempday = tempday + dayofmonth[i];
			}
			tempday = tempday + day;

			printf("%d �� %d �� %d ��Ϊ����� %d �졣\n", year, month, day, tempday);
			break;
	}
	system("pause");
	return 0;
}