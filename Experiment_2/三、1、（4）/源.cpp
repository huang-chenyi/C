#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include<stdio.h>
int main() 
{
	int a, b, c, d;
	int temp;
	printf("请输入四个整数，用空格分隔：\n");  	// 读取四个整数
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a > b) { temp = a; a = b; b = temp; }   //冒泡排序
	if (a > c) { temp = a; a = c; c = temp; }
	if (a > d) { temp = a; a = d; d = temp; }
	if (b > c) { temp = b; b = c; c = temp; }
	if (b > d) { temp = b; b = d; d = temp; }
	if (c > d) { temp = c; c = d; d = temp; }
	printf("从小到大排序后的整数为：%d %d %d %d\n", a, b, c, d);
	return 0;
}
