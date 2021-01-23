#include<stdio.h>
#include<windows.h>

#define NUM 12

struct birthday {
	int order;//序号
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
	//存储排序
	int arrorder[12], * ptrord = &arrorder;
	//初始化
	for (k = 0; k < 12; k++) {
		arrorder[k] = k;
	}

	//转化
	float age_month[12],* age_month_ptr = &age_month;
	int nowyear, nowmonth, nowday;

	//获取当前时间
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	nowyear = sys.wYear;
	nowmonth = sys.wMonth;
	nowday = sys.wDay;

	for (k = 0; k < 12; k++) {
		//计算年龄
		//月平均30天，误差可忽略不计
		age_month[k] = (nowyear - people[k].year) * 12
			+ (nowmonth - people[k].month) + ((float)(nowday - people[k].day)) / 30.0;
	}

	sort_month(age_month_ptr, ptrord);

	//输出
	int j;
	printf("出生日期\t年龄\n");
	for (k = 0; k < NUM; k++) {
		for (j = 0; j < NUM; j++) {
			if (arrorder[k] == people[j].order)
				break;
		}
		printf("%4d年%2d月%2d日\t%f\n", people[j].year, people[j].month, people[j].day, age_month[k]);
	}

}

int sort_month(float* age_month, int* arrorder) {
	
	//Shell排序法
	int gap, i, j, temp, ordtemp;

	for (gap = NUM / 2; gap > 0; gap /= 2) {
		for (i = gap; i < NUM; i++) {
			for (j = i - gap; j >= 0 && age_month[j] > age_month[j + gap]; j -= gap) {
				temp = *(age_month + j);
				*(age_month + j) = *(age_month + j + gap);
				*(age_month + j + gap) = temp;

				//更换排序
				ordtemp = *(arrorder + j);
				*(arrorder + j) = *(arrorder + j + gap);
				*(arrorder + j + gap) = ordtemp;
			}
		}
	}

}