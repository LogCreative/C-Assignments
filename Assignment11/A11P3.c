#include <stdio.h>
/* A11P3 - 编写一个程序用链表解决约瑟夫环的问题（n 个人围成一圈, 从第一个人开始报数1、2、3凡报到3 者，退出圈子。找出最后留在圈子中人的序号。如果将n 个人用0 到n-1 编号时, 当n=5 时, 最后剩下的是编号为3 的人） */

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