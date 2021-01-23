#include <stdio.h>
#include <string.h>
/* A8P3 - 编写函数，计算两个时刻之间的时间差，时间以时：分：秒表示。 */

int main() {
	char time1[9], time2[9];//存储时间字符串
	void time_cmp(char time1[9], char time2[9]);
	printf("请输入第一个时间(HH:MM:SS)：");
	gets_s(time1, 9);
	printf("请输入第二个时间(HH:MM:SS)：");
	gets_s(time2, 9);

	time_cmp(time1, time2);
	return 0;
}

void time_cmp(char time1[9], char time2[9]) {
	char* ptr;
	int i, j;

	int time[3][3] = { 0 };//time矩阵
	/*[h1 m1 s1
	   h2 m2 s2
	   h  m  s ]*/


	int atoi(char num);
	int tran = 1;
	//转换
	while (tran <= 2) {
		if (tran == 1) {
			ptr = &time1[0];
			i = 0;
		}
		else {
			ptr = &time2[0];
			i = 1;
		}
		for (j = 0; j < 2; j++) {//列
			while (*ptr != ':') {
				time[i][j] = time[i][j] * 10 + atoi(*ptr);
				ptr += 1;
			}
			ptr += 1;
		}
		while (*ptr != '\0') {//秒的判定符
			time[i][j] = time[i][j] * 10 + atoi(*ptr);
			ptr += 1;
		}
		tran++;
	}

	//排序

	int big = 1;//大者
	for (j = 0; j <= 2; j++) {
		if (time[0][j] < time[1][j]) {
			big = 2;
		}
		else if (time[0][j] == time[1][j]) {
			continue;
		}
	}

	int swap_value(int* num1, int* num2);
	if (big==2){//交换二者的顺序
		for (j = 0; j <= 2; j++)
			swap_value(&time[0][j], &time[1][j]);
	}

	//计算

	//借位运算
	for (j = 2; j >= 0; j--) {
		if ((time[2][j] = time[0][j] - time[1][j]) < 0) {
			time[2][j] += 60;
			time[0][j - 1]--;
		}
	}

	//输出
	printf("相差的时间(HH:MM:SS)：%d:%d:%d", time[2][0], time[2][1], time[2][2]);
}

int swap_value(int* num1, int* num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	return 0;
}

int atoi(char num) {
	switch (num) {
	case '0':return 0; break;
	case '1':return 1; break;
	case '2':return 2; break;
	case '3':return 3; break;
	case '4':return 4; break;
	case '5':return 5; break;
	case '6':return 6; break;
	case '7':return 7; break;
	case '8':return 8; break;
	case '9':return 9; break;
	default:return 0; break;
	}
}