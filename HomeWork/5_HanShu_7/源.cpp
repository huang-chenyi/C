#include<iostream>
#define line 50
using namespace std;
//��������
int Yang(int n);
//������
int main(void)
{
	int n;
	cout << "������n��ֵ��";
	cin >> n;
	Yang(n);
	return 0;
}
//���庯��
int Yang(int n)
{
	int i, j;
	int m;   //Ӧ����n+1�У�2n+1��
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
				cout << ' ';
			}
			if (digit[i][j] != 0)
			{     //��������з�0����
				cout << digit[i][j];
			}
		}
		cout << endl;  //���Ƹ�ʽ ����
	}
	return 0;
}


