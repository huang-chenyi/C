#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
	float score[4][6] = { {65,87,68,56,78},{83,94,67,85,91},{71,75,69,84,89} };
	for (int i = 0; i < 3; i++)
	{   //计算每个学生的平均成绩
		float sum = 0;
		for (int j = 0; j < 5; j++)
			sum += score[i][j];
		score[i][5] = sum / 5;
	}
	float aver[5] = { 0 };
	for (int i = 0; i < 5; i++)
	{   //计算单科的成绩总和
		float sum = 0;
		for (int j = 0; j < 3; j++)
			sum += score[j][i];
		score[3][i] = sum;
		aver[i] = sum / 3;
	}
	cout << fixed << setprecision(1);
	cout << "Input(输入成绩)：" << endl;
	for (int i = 0; i < 3; i++)
	{   //输出原数据
		cout << '\t';
		for (int j = 0; j < 5; j++)
			cout << setw(6) << score[i][j];
		cout << endl;
	}
	cout << endl << "Output(输出结果)：" << endl;
	for (int i = 0; i < 4; i++)
	{   
		cout << '\t';
		for (int j = 0; j < 6; j++)
			cout << setw(6) << score[i][j];
		cout << endl;
	}
	cout << endl << "average：" << endl << '\t';
	for (int i = 0; i < 5; i++)
		cout << setw(6) << aver[i];
	return 0;
}