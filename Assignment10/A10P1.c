#include<stdio.h>
#include<windows.h>
/* A10P1 - ��12 ���˳���������, ��shell ����, ������( ����Ϊ��λ, ���仯����) ��С�����������, Ҫ����һ��ȫ�ֽṹ��һ����Ϊsort-month �ĺ���, �������������, ��main ������������������� */

#define NUM 12

struct birthday {
	int order;//���
	int year;
	int month;
	int day;
};

int main() {
	struct birthday people[NUM];
	struct birthday* birthptr = &people;
	int sort_month(struct birthday people[NUM], int* arrorder);
	int i;
	for (i = 0; i < NUM; i++) {
		people[i].order = i;
		scanf_s("%d %d %d", &people[i].year, &people[i].month, &people[i].day);
	}

	int k;
	//�洢����
	int arrorder[12], * ptrord = &arrorder;
	//��ʼ��
	for (k = 0; k < 12; k++) {
		arrorder[k] = k;
	}

	//ת��
	float age_month[12],* age_month_ptr = &age_month;
	int nowyear, nowmonth, nowday;

	//��ȡ��ǰʱ��
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	nowyear = sys.wYear;
	nowmonth = sys.wMonth;
	nowday = sys.wDay;

	for (k = 0; k < 12; k++) {
		//��������
		//��ƽ��30�죬���ɺ��Բ���
		age_month[k] = (nowyear - people[k].year) * 12
			+ (nowmonth - people[k].month) + ((float)(nowday - people[k].day)) / 30.0;
	}

	sort_month(age_month_ptr, ptrord);

	//���
	int j;
	printf("��������\t����\n");
	for (k = 0; k < NUM; k++) {
		for (j = 0; j < NUM; j++) {
			if (arrorder[k] == people[j].order)
				break;
		}
		printf("%4d��%2d��%2d��\t%f\n", people[j].year, people[j].month, people[j].day, age_month[k]);
	}

}

int sort_month(float* age_month, int* arrorder) {
	
	//Shell����
	int gap, i, j, temp, ordtemp;

	for (gap = NUM / 2; gap > 0; gap /= 2) {
		for (i = gap; i < NUM; i++) {
			for (j = i - gap; j >= 0 && age_month[j] > age_month[j + gap]; j -= gap) {
				temp = *(age_month + j);
				*(age_month + j) = *(age_month + j + gap);
				*(age_month + j + gap) = temp;

				//��������
				ordtemp = *(arrorder + j);
				*(arrorder + j) = *(arrorder + j + gap);
				*(arrorder + j + gap) = ordtemp;
			}
		}
	}

}