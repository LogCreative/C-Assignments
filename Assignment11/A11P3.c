#include <stdio.h>

//需要用到的操作：定义与删除

#define MAXLINE 1000


struct cell {
	int num;//序号
	struct cell* next;
};

int main() {
	int n;
	struct cell cell[MAXLINE];


	//初始化
	printf("请输入人数：");
	scanf_s("%d", &n);
	
	int i;
	for (i = 0; i < n - 1; i++) {
		cell[i].num = i;
		cell[i].next = &cell[i + 1];
	}
	cell[n - 1].num = n - 1;
	cell[n - 1].next = &cell[0];

	//成环

	//报数
	struct cell* now = &cell[0];//报到的人
	struct cell* temp = &cell[n-1];//前一个人
	while(now->next != now) {
		for (i = 1; i <= 3; i++) {
			if (i == 3) {
				//链接前一个人
				temp->next = ((temp->next)->next);
				//前一个人不变
				//下一个人为下下个人
				now = now->next;
			}
			else {
				//存储本人作为前一个人
				temp = now;
				//存储下一个人作为本人
				now = now->next;
			}
		}
	}

	printf("%d", now->num);
}