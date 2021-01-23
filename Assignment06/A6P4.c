#include<stdio.h>
#include<string.h>
/* A6P4 - 编写一个名为find_string 的函数，其功能是确定一个字符串是否包含在另一个字符串之中。函数调用方式是：find_string(string1 ，string2)，其中，string1 是要查的字符串，string2 是样品字符串。如果在string1 中找到了string2 中的字符串，则返回它在string1 中的起始位置。如果没有找到则返回-1。测试string1 = “a chatterbox”, string2 = ”hat’ */

int main() {
	int find_string(char string1[], char string2[]);
	char str1[1000], str2[1000];
	gets_s(str1, 1000);
	gets_s(str2, 1000);
	int output = find_string(str1, str2);

	printf("返回值：%d\n", output);
	return output;
}

int find_string(char string1[], char string2[]) {//定义函数
	int i = 0;//字符串1查找循环变量
	int j = 0;//字符串2比较控制循环变量
	int start = -1;//开始位置

	while (string1[i] != '\0') {
		if (string1[i] == string2[j]) {
			start = i;
			do {//第二个字符串开始循环
				if (string1[i + j] != string2[j]) {
					start = -1;
					break;
				}
				j++;
			} while (string2[j] != '\0');//直到字符串2截止
		}
		if (start != -1)
			break;
		i++;//继续寻找
	}

	return start;
}