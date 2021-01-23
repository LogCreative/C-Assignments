#include<stdio.h>

#define NUM 10

struct stu_data {
	int num;
	float mathmid, mathfinal;
	float mathavg;
}*ptr;

struct stu_data database[NUM] = { 0 };

int main() {
	struct stu_data* ptr = &database;
	int i;
	int mathavgdata[NUM] = { 0 };
	int arrorder[NUM] = { 0 };

	for (i = 0; i < NUM; i++) {
		printf("请输入第%d位同学的学号：", i + 1);
		scanf_s("%d", &(ptr+i)->num);
		printf("请输入其数学期中成绩和期末成绩：");
		scanf_s("%f %f", &(ptr + i)->mathmid, &(ptr + i)->mathfinal);
		(ptr + i)->mathavg = ((ptr + i)->mathmid + (ptr + i)->mathfinal) / 2.0;
		mathavgdata[i] = (ptr + i)->mathavg;
		arrorder[i] = (ptr + i)->num;
	}

	int gap, j, temp, ordtemp;

	for (gap = NUM / 2; gap > 0; gap /= 2) {
		for (i = gap; i < NUM; i++) {
			for (j = i - gap; j >= 0 && mathavgdata[j] < mathavgdata[j + gap]; j -= gap) {
				temp = mathavgdata[j];
				mathavgdata[j] = mathavgdata[j + gap];
				mathavgdata[j + gap] = temp;
					
				//更换排序					
				ordtemp = *(arrorder + j);
				*(arrorder + j) = *(arrorder + j + gap);
				*(arrorder + j + gap) = ordtemp;
				}
			}
		}

	//输出
	float overallavg = 0;
	printf("学号\t数学期中\t数学期末\t数学平均\n");
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			if (arrorder[i] == (ptr + j)->num)
				break;
		}
		printf("%d\t%f\t%f\t%f\n", (ptr + j)->num, (ptr + j)->mathmid,
			(ptr + j)->mathfinal, (ptr + j)->mathavg);
		overallavg += (ptr + j)->mathavg;
	}
	overallavg /= ((float)NUM);
	printf("--------------------------------------------------\n");
	printf("总平均分\t\t\t\t%f\n", overallavg);

	return 0;
}

