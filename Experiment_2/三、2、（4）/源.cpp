#include<iostream>
using namespace std;
int main(void)
{
	char ch;
	int digit = 0;
	int	letters_big = 0, letters_small = 0;
	int space = 0;
	int others = 0;
	cout << "������һ���ַ����Իس�����������";
	ch = getchar();		//�������������ַ�
	while (ch != '\n')
	{		//����ASCII���ж��ַ�����
		if (ch >= 48 && ch <= 57)//�ж�����
			digit++;
		else if (ch >= 65 && ch <= 90)//�жϴ�д��ĸ
			letters_big++;
		else if (ch >= 97 && ch <= 122)//�ж�Сд��ĸ
			letters_small++;
		else if (ch == ' ')//�жϿո�
			space++;
		else			//�����ַ�
			others++;
		ch = getchar();  //��ѭ������ȡ������������ַ�
	}
	cout << "���ֵĸ���Ϊ��" << digit <<endl
		 << "��д��ĸ�ĸ���Ϊ��" << letters_big <<endl
		 << "Сд��ĸ�ĸ���Ϊ��" << letters_small <<endl
		 << "�ո�ĸ���Ϊ��" << space <<endl
		 << "�����ַ��ĸ���Ϊ��" << others <<endl;
	return 0;
}