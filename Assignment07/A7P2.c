#include<stdio.h>
/* A7P2 - 在n*n 的方阵里填入1，2，...，n*n , 要求填成蛇形。 */

#define MAXLINE 50

int main() {
	int n;//阶数
	int data[MAXLINE][MAXLINE] = { 0 };//数据
	int left, top, right, bottom;//边界定义，指向满型的边界值
	int i, j;//赋值指针
	int isgn, jsgn;//方向向量
	int now;//现在的值

	printf("请输入数组阶数（1-%d）：",MAXLINE);
	scanf_s("%d", &n);

	if (n > MAXLINE) {
		printf("超过上界。\n");
	}
	else {
		//初始化
		//边界
		left = -1;
		top = -1;
		right = n;
		bottom = n;
		//赋值指针
		i = -1;
		j = n - 1;
		//现在的值
		now = 1;
		//第一步的操作
		isgn = 1;
		jsgn = 0;

		//循环
		while (now <= n * n) {
			//移动指针
			i = i + isgn;
			j = j + jsgn;
			//赋值
			data[i][j] = now;

			//判断、换向、更新边界
			if (i + isgn >= bottom) {//预判,是否触底
				//右下角，下一次向左移动
				isgn = 0;
				jsgn = -1;
				right--;//本列已满
			}
			else if (j + jsgn <= left) {//触左
				isgn = -1;
				jsgn = 0;
				bottom--;
			}
			else if (i + isgn <= top) {//触顶
				isgn = 0;
				jsgn = 1;
				left++;
			}
			else if (j + jsgn >= right) {//触右
				isgn = 1;
				jsgn = 0;
				top++;
			}

			now++;//最后增加数字
		}

		for (i = 0; i <= n - 1; i++) {
			for (j = 0; j <= n - 1; j++) {
				printf("%d\t", data[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}