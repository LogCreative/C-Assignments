#include<stdio.h>
#include<string.h>

int main() {
	int find_string(char string1[], char string2[]);
	char str1[1000], str2[1000];
	gets_s(str1, 1000);
	gets_s(str2, 1000);
	int output = find_string(str1, str2);

	printf("����ֵ��%d\n", output);
	return output;
}

int find_string(char string1[], char string2[]) {//���庯��
	int i = 0;//�ַ���1����ѭ������
	int j = 0;//�ַ���2�ȽϿ���ѭ������
	int start = -1;//��ʼλ��

	while (string1[i] != '\0') {
		if (string1[i] == string2[j]) {
			start = i;
			do {//�ڶ����ַ�����ʼѭ��
				if (string1[i + j] != string2[j]) {
					start = -1;
					break;
				}
				j++;
			} while (string2[j] != '\0');//ֱ���ַ���2��ֹ
		}
		if (start != -1)
			break;
		i++;//����Ѱ��
	}

	return start;
}