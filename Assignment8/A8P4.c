#include<stdio.h>
#include<stdlib.h>


int main() {
	int MAXLINE;
	printf("请输入需要输入的数字数目：");
	scanf_s("%d", &MAXLINE);

	double* num = (double*)malloc(MAXLINE * sizeof(int));
	double* ptr = &num[0];//输入、比较指针
	double* ptrbig = &num;//最大数指针,比较从第2个开始
	double* ptrsmall = &num;//最小数指针
	
	//输入

	printf("请输入%d个数：\n",MAXLINE);
	while (ptr < &num[MAXLINE]) {
		scanf_s("%lf", ptr);
		ptr++;
	}
	
	//比较
	
	//确定最大值、最小值
	ptr = &num[0];//初始化
	while (ptr < &num[MAXLINE]) {
		if (*ptr > * ptrbig) {
			ptrbig = ptr;
		}
		if (*ptr < *ptrsmall) {
			ptrsmall = ptr;
		}
		ptr++;
	}

	//交换

	double temp;
	temp = num[0];
	num[0] = *ptrbig;
	*ptrbig = temp;

	temp = num[MAXLINE - 1];
	num[MAXLINE - 1] = *ptrsmall;
	*ptrsmall = temp;

	//输出
	ptr = &num[0];
	while (ptr < &num[MAXLINE]) {
		printf("%lf ", *ptr);
		ptr++;
	}
	
	free(num);
	return 0;
}