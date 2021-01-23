#include<stdio.h>
#include<math.h>
/* A2P7 - 计算二维平面上的矩形面积与周长 */

int main() {
	float x1, y1, x2, y2, x3, y3, x4, y4;
	double L,W;
	double V1, V2, V3;//直角判定

	//数据采集
	printf("输入第一个坐标："); scanf_s("%f %f", &x1, &y1);
	printf("输入第二个坐标："); scanf_s("%f %f", &x2, &y2);
	printf("输入第三个坐标："); scanf_s("%f %f", &x3, &y3);
	printf("输入第四个坐标："); scanf_s("%f %f", &x4, &y4);

	//矩形判定
	V1 = (x2 - x1)*(x4 - x1) + (y2 - y1)*(y4 - y1);
	V2 = (x2 - x1)*(x3 - x2) + (y2 - y1)*(y3 - y2);
	V3 = (x2 - x3)*(x3 - x4) + (y2 - y3)*(y3 - y4);

	if ((V1 == 0)&&(V2 == 0)&&(V3 == 0)) {
		//是矩形
		L = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		W = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
		printf("这是一个矩形。\n周长为 %f\n面积为 %f\n", 2 * (L + W), L * W);
	}
	else {
		printf("这不是一个矩形。");
	}


	system("pause");
	return 0;

}