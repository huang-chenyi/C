#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include <stdio.h>
int main(void)
{   //初始化原数组
	int digits[10] = {1, 4, 6, 7, 8, 10, 17, 19, 20, 38 };
	int digits_new[11] = { 0 };
	int num = 0, *Num, *dig, *dig_new;
	Num = &num; //初始化指针
	dig = digits;
	dig_new = digits_new;
	printf("请输入一个整数:");
	scanf("%d", Num); //读取输入的任意整数
	for (int i = 0; i < 10; i++)
	{//该整数大于原数组元素时，将原数组元素转移到对应新数组的位置上
		if (*(dig + i) < *Num) 
			*(dig_new + i) = *(dig + i);
		else
		{//否则先将该整数放进新数组中再放入剩余原数组数据
			*(dig_new + i) = *Num;
			for (;i < 10;i++)
				*(dig_new + i + 1) = *(dig + i);
			break;
		}
	}
	//输出结果
	printf("原始数组数据:");
	for (int i = 0; i < 10; i++, dig++)
		printf("%d ", *dig);
	printf("\n插入数据后的数组数据:");
	for (int i = 0; i < 11; i++, dig_new++)
		printf("%d ", *dig_new);
	printf("\n");
	return 0;
}
