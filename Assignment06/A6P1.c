#include<stdio.h>
/* A6P1 - 试编5 个学生，每人考5 门课, 成绩统计数据如下：
(number, math,phys,chem,mech,eng):
9001, 76,88,91,67,90
9002, 92,82,91,85,87
9003, 89,86,81,87,97
9004, 58,62,76,81,51
9005, 96,93,84,89,94;
要求如下:
(1) 找出全部成绩中成绩最高的学号和课程名。
(2) 找出有不及格课程的学号及其各门课的全部成绩。
(3) 求每门课的平均成绩和每个学生5 门课程的总分，表格形式输出。
*/

int main() {
	int grade[5][6] = { {9001, 76,88,91,67,90},{9002, 92,82,91,85,87},{9003, 89,86,81,87,97},
	{9004, 58,62,76,81,51},{9005, 96,93,84,89,94} };
	int i, j;//行、列

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

	printf("成绩最高的学号为 ");
	switch (jmax) {
	case 1:
		printf("%d ,课程为 math .\n", grade[imax][0]);
		break;
	case 2:
		printf("%d ,课程为 phys .\n", grade[imax][0]);
		break;
	case 3:
		printf("%d ,课程为 chem .\n", grade[imax][0]);
		break;
	case 4:
		printf("%d ,课程为 mech .\n", grade[imax][0]);
		break;
	case 5:
		printf("%d ,课程为 eng .\n", grade[imax][0]);
		break;
	}
	

	//Problem (2)
	printf("\n不及格同学：\n学号 math phys chem mech  eng\n");
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
	double average[5] = { 0 };//平均成绩
	printf("\n各科平均成绩：\n学科\t math\t phys\t chem\t mech\t eng\n平均");
	for (j = 1; j <= 5; j++) {
		for (i = 0; i <= 4; i++) {
			average[j-1] += grade[i][j];
		}
		average[j-1] = average[j-1] / 5.0;
		printf("\t%5.1lf", average[j-1]);
	}

	printf("\n每位学生总分：\n学号\t总成绩\n");
	int total[5] = { 0 };//总分
	for (i = 0; i <= 4; i++) {
		printf("%4d\t", grade[i][0]);
		for (j = 1; j <= 5; j++) {
			total[i] += grade[i][j];
		}
		printf("%6d\n", total[i]);
	}

	return 0;
}