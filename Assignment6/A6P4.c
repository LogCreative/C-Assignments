#include<stdio.h>
#include<string.h>

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