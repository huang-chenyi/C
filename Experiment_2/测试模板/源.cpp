

#include <stdio.h>
int main() 
{
	char arr[10]; // �洢������ַ�
	int small = 0; // Сд��ĸ����
	int digit = 0; // ���ָ���
	int other = 0; // �����ַ�����
	//int i;  //ɾ��
	printf("������10���ַ���\n");
	for (int i = 0; i < 10; i++) 
	{	// ��ȡ10���ַ�
		scanf("%c", &arr[i]);
	}
	for (int i = 0; i < 10; i++) 
	{			//����ASCII���ж��ַ�����
		if (arr[i] >= 97 && arr[i] <= 122)//�ж�Сд��ĸ
			small++;
		else if (arr[i] >= 48 && arr[i] <= 57)//�ж�����
			digit++;
		else  // �����ַ�
			other++;
	}
	// ������
	printf("Сд��ĸ������%d\n", small);
	printf("���ָ�����%d\n", digit);
	printf("�����ַ�������%d\n", other);
	return 0;
}





/*
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
	cout << "���ֵĸ���Ϊ��" << digit << endl
		<< "��д��ĸ�ĸ���Ϊ��" << letters_big << endl
		<< "Сд��ĸ�ĸ���Ϊ��" << letters_small << endl
		<< "�ո�ĸ���Ϊ��" << space << endl
		<< "�����ַ��ĸ���Ϊ��" << others << endl;
	return 0;
}
*/