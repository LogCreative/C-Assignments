#include<stdio.h>
#include<stdlib.h>

#define NUM 10

struct stu_data {
	int num;
	float grade;
}*ptr;

struct stu_data database[NUM] = { 0 };

int main() {
	struct stu_data* ptr = &database;
	int i, n;
	int data[NUM] = { 0 };
	int arrorder[NUM] = { 0 };

	printf("同学人数（<10）：");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		printf("请输入第%d位同学的学号：", i + 1);
		scanf_s("%d", &(ptr + i)->num);
		printf("请输入其成绩：");
		scanf_s("%f",&(ptr+i)->grade);
		data[i] = (ptr + i)->grade;
		arrorder[i] = (ptr + i)->num;
	}

	int gap, j, temp, ordtemp;

	for (gap = n / 2; gap > 0; gap /= 2) {
		for (i = gap; i < n; i++) {
			for (j = i - gap; j >= 0 && data[j] > data[j + gap]; j -= gap) {
				temp = data[j];
				data[j] = data[j + gap];
				data[j + gap] = temp;

				//更换排序					
				ordtemp = *(arrorder + j);
				*(arrorder + j) = *(arrorder + j + gap);
				*(arrorder + j + gap) = ordtemp;
			}
		}
	}

	//输出
	float overallavg = 0;
	printf("学号\t成绩\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (arrorder[i] == (ptr + j)->num)
				break;
		}
		printf("%d\t%f\n", (ptr + j)->num, (ptr + j)->grade);
	}

	return 0;
}

