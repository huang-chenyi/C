#define _CRT_SECURE_NO_WARNINGS    //确保scanf()的正常运行
#include <stdio.h>
#define line 3
#define colu 3
int main(void)
{
	int digit[line][colu] = { 0 };
	printf("输入一个3*3的二维数组数据:");
	for(int i = 0; i < line; i++)
		for (int j = 0; j < colu; j++)
			scanf("%d", &digit[i][j]);
		bool b = false;
	for (int i = 0; i < line; i++)
	{			
		int max = digit[i][0];
		int line_temp = 0;
		int colu_temp = 0;
		bool a = true;
		for (int j = 0; j < colu; j++)
		{
			if (max < digit[i][j])
			{
				max = digit[i][j];
				line_temp = i;
				colu_temp = j;
			}
		}
		for (int j = 0; j < line; j++)
		{
			if (max > digit[line_temp][colu_temp])
				a = false;
		}
		if (a == true)
		{
			printf("第%d行第%d列的%d为鞍点\n", line_temp + 1, colu_temp + 1, max);
			b = true;
		}
	}
	if (b == false)
		printf("该数列中不存在鞍点");
	return 0;
}
