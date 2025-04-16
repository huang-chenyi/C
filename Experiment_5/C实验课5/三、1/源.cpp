#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
int main(void)
{
	float a[10] = { 0 };
	float *b;
	b = a; //定义指针变量
	printf("请输入10个数据:\n");
	for (b = a + 9; b >= a; b--)
		scanf("%f", b); //读入10个数据
	float sum = 0;
	for (b = a + 9; b >= a; b--)
		sum += *b;  //计算10个数的总和
	float aver;
	aver = sum / 10;//计算平均值
	printf("平均值为:%.2f\n", aver);
	return 0;
}
