#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 50  // ������
#define M 3  // ����������
//��������
int number(int n, int m);
//������
int main()
{
    int lastPerson = number(N, M);
    if (lastPerson != 0)
        printf("������µ���ԭ����%d�ŵ���λ��\n", lastPerson);
    return 0;
}
//���庯��
int number(int n, int m)
{
    int people[N];
    int nowperson = 0;  // ��ǰ�������˵�����
    int person = n;  // Ȧ����ʣ�������
    for (int i = 0; i < n; ++i)
        people[i] = i + 1;  // ��ʼ�����
    while (person > 1)
    { // �ҵ���m����
        for (int i = 0; i < m - 1; ++i)
        {
            nowperson = (nowperson + 1) % n;
            while (people[nowperson] == 0) // �����Ѿ����е���
                nowperson = (nowperson + 1) % n;
        }
        // �Ƴ���m����
        people[nowperson] = 0;  // ���Ϊ����
        person--;  // ��������1
        // �ƶ�����һ����
        nowperson = (nowperson + 1) % n;
        while (people[nowperson] == 0) // �����Ѿ����е���
            nowperson = (nowperson + 1) % n;
    }
    // �ҵ����ʣ�µ��˵ı��
    for (int i = 0; i < n; ++i)
        if (people[i] != 0)// �������ʣ�µ��˵ı��
            return people[i];
}