#include<stdio.h>
#include<stdlib.h>
/* A9P4 - 对于一个m*n 的矩阵，找到其最大值，并且输出行下标和列下标（如果有多个最大值，则全部输出），要求使用指针。 */

#define MAXLINE 100

int main() {
	int m, n;
	printf("请输入行数：");
	scanf_s("%d", &m);
	printf("请输入列数：");
	scanf_s("%d", &n);

	int Array[MAXLINE][MAXLINE] = { 0 };
	int i, j;

	//输入数组与同时判定
	int* max = &Array[0][0];
	int maxpos[MAXLINE][2] = { 0 };
	int* maxposptr=&maxpos;//大值位置指针
	int count = 0;
	int k;

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf_s("%d", &Array[i][j]);
			if (Array[i][j] >= *max) {
				if (Array[i][j] > * max) {
					for (k = 0; k < MAXLINE; k++) {
						maxpos[k][0] = 0;
						maxpos[k][1] = 0;
					}
					max = &Array[i][j];
					count = 0;
					maxposptr = &maxpos;
				}
				*maxposptr = i;
				*(maxposptr + 1) = j;
				maxposptr = maxposptr + 2;
				count++;
			}
		}
	}

	printf("最大值是：%d", *max);
	printf("\n行\t列");
	for (i = 0; i < count; i++) 
		printf("\n%d\t%d", maxpos[i][0]+1, maxpos[i][1]+1);

	return 0;
}