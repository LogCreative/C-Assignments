#include<stdio.h>
/* A6P1 - �Ա�5 ��ѧ����ÿ�˿�5 �ſ�, �ɼ�ͳ���������£�
(number, math,phys,chem,mech,eng):
9001, 76,88,91,67,90
9002, 92,82,91,85,87
9003, 89,86,81,87,97
9004, 58,62,76,81,51
9005, 96,93,84,89,94;
Ҫ������:
(1) �ҳ�ȫ���ɼ��гɼ���ߵ�ѧ�źͿγ�����
(2) �ҳ��в�����γ̵�ѧ�ż�����ſε�ȫ���ɼ���
(3) ��ÿ�ſε�ƽ���ɼ���ÿ��ѧ��5 �ſγ̵��ܷ֣������ʽ�����
*/

int main() {
	int grade[5][6] = { {9001, 76,88,91,67,90},{9002, 92,82,91,85,87},{9003, 89,86,81,87,97},
	{9004, 58,62,76,81,51},{9005, 96,93,84,89,94} };
	int i, j;//�С���

	//Problem (1)
	int max = 0;
	int imax = 0, jmax = 1;

	for (i = 0; i <= 4; i++) {
		for (j = 1; j <= 5; j++) {
			if (grade[i][j] > grade[imax][jmax]) {
				imax = i;
				jmax = j;
			}
		}
	}

	printf("�ɼ���ߵ�ѧ��Ϊ ");
	switch (jmax) {
	case 1:
		printf("%d ,�γ�Ϊ math .\n", grade[imax][0]);
		break;
	case 2:
		printf("%d ,�γ�Ϊ phys .\n", grade[imax][0]);
		break;
	case 3:
		printf("%d ,�γ�Ϊ chem .\n", grade[imax][0]);
		break;
	case 4:
		printf("%d ,�γ�Ϊ mech .\n", grade[imax][0]);
		break;
	case 5:
		printf("%d ,�γ�Ϊ eng .\n", grade[imax][0]);
		break;
	}
	

	//Problem (2)
	printf("\n������ͬѧ��\nѧ�� math phys chem mech  eng\n");
	int k;
	for (i = 0; i <= 4; i++) {
		for (j = 1; j <= 5; j++) {
			if (grade[i][j]<60){
				printf("%d", grade[i][0]);
				for (k = 1; k <= 5; k++) {
					printf("%5d", grade[i][k]);
				}
				break;
			}
		}
	}
	printf("\n");

	//Problem (3)
	double average[5] = { 0 };//ƽ���ɼ�
	printf("\n����ƽ���ɼ���\nѧ��\t math\t phys\t chem\t mech\t eng\nƽ��");
	for (j = 1; j <= 5; j++) {
		for (i = 0; i <= 4; i++) {
			average[j-1] += grade[i][j];
		}
		average[j-1] = average[j-1] / 5.0;
		printf("\t%5.1lf", average[j-1]);
	}

	printf("\nÿλѧ���ܷ֣�\nѧ��\t�ܳɼ�\n");
	int total[5] = { 0 };//�ܷ�
	for (i = 0; i <= 4; i++) {
		printf("%4d\t", grade[i][0]);
		for (j = 1; j <= 5; j++) {
			total[i] += grade[i][j];
		}
		printf("%6d\n", total[i]);
	}

	return 0;
}