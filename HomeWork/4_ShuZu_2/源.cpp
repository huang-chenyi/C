#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
#define course 5
#define person 10
int main(void)
{
    int score[person][course] = { 0 };// ��ά����洢����ѧ���ĳɼ�
    int good_id[person] = { 0 }; int good_score[person] = { 0 };   //����ѧ��ѧ�š��ɼ�
    int poor_id[person] = { 0 }; int poor_score[person] = { 0 };   //����ѧ��ѧ�š��ɼ�
    int sum_score[person] = { 0 };    //�ɼ��ݴ�
    int good = 0, poor = 0;    //��˳���¼����򲹿�ѧ���ĸ���
    for (int i = 0; i < person; i++)
    {    //����ѧ���ɼ�
        printf("������ѧ��%d�ĳɼ�: ", i + 1);
        for (int l = 0; l < course; l++)
        {
            scanf("%d", &score[i][l]);
            sum_score[i] += score[i][l]; // �ۼ�ÿ��ѧ�����ܷ�
        }
        int temp1 = 0, temp2 = 1, temp3 = 1;
        for (int l = 0; l < course; l++)
        {     //����ѧ���Ƿ��������Ҫ��������¼
            if (score[i][l] >= 85) temp1++;
            if (score[i][l] < 70) temp2 = 0;
            if (score[i][l] < 60) temp3 = 0;
        }
        if (temp1 >= 3 && temp2 == 1)
        {     //����ѧ��ѧ�ż�������¼
            good_id[good] = 2354 * 1000 + i + 1;
            good_score[good++] = sum_score[i];
        }
        if (temp3 == 0)
        {    //����ѧ��ѧ�ż�������¼
            poor_id[poor] = 2354 * 1000 + i + 1;
            poor_score[poor++] = sum_score[i];
        }
    }
    printf("\n�ɼ����������:%d\n����:\n", good);
    for (int l = 0; l < good; l++)
    {  //�������ѧ��
        printf("ѧ��:0%d, �ɼ�:%d\n", good_id[l], good_score[l]);
    }
    printf("\n");   //���Ƹ�ʽ
    printf("��Ҫ����������:%d\n����:\n", poor);
    for (int l = 0; l < poor; l++)
    {  //�������ѧ��
        printf("ѧ��:0%d, �ɼ�:%d\n", poor_id[l], poor_score[l]);
    }
    return 0;
}