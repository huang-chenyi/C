#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define line 300
int main(void)
{
	int i, j;
	int n, m;   //Ӧ����n+1�У�2n+1��
	printf("������n��ֵ��");
	scanf("%d", &n);
	m = 2 * n + 1;
	int digit[line][line] = { {0} };
	digit[0][n] = 1;  //�������ݵĳ�ʼ��
	digit[n][0] = 1;
	for (i = 0; i <= n; i++)
	{    //��ʼ�����������˵�����1
		for (j = 0; j <= m; j++)
		{
			digit[i + 1][j + 1] = digit[i][j] + digit[i][j + 2];
		}
	}
	for (i = 0; i <= n; i++)
	{    //����������ǵĹ��ɵó��������ֵ�����
		for (j = 0; j <= m; j++)
		{
			if (digit[i][j] == 0)
			{    //�������е�1�滻Ϊ�ո����
				printf(" ");
			}
			if (digit[i][j] != 0)
			{     //��������з�0����
				printf("%d", digit[i][j]);
			}
		}
		printf("\n");  //���Ƹ�ʽ ����
	}
	return 0;
}
