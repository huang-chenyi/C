#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define N 3 //ʵ��ʱ��N = 5��
struct Stu {
    char name[10];
    char id[9];
    char profe[10];
    char dorm[10];
};
//��������
void putin(struct Stu q[], int n); //��ȡ��Ϣ
void printlist(struct Stu q[], int n); //��ѧ������
int sort(char a[], char b[]); //�ж�ѧ�Ŵ�С
void printfile(struct Stu q[], int n); //������ļ�
void scanfile(struct Stu q[], int n); //
//������
int main() 
{
    struct Stu student[N] = { 0 };
    putin(student, N);
    printlist(student, N);
    printfile(student, N); // ������ļ�
    scanfile(student, N);  // ��ȡ�ļ�����
    return 0;
}

// ���庯��
void putin(struct Stu q[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        printf("�������%d��ѧ������Ϣ(����,ѧ��,רҵ,����):", i + 1);
        scanf("%s %s %s %s", q[i].name, q[i].id, q[i].profe, q[i].dorm);
    }
}
//void putin(struct Stu q[], int n)
//{ //ά��N��ʵ��ʱ��N = 5����ѧ���ĸ�����Ϣ��
//  //1 ���ýṹ���������ʽ�������ݣ�
//    for (int i = 0; i < N; i++)
//    {
//        printf("�������%d��ѧ������Ϣ(����,ѧ��,רҵ,����):", i + 1);
//        scanf("%s %s %s %s", &q->name, &q->id, &q->profe, &q->dorm);
//    }
//}
void printlist(struct Stu q[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (sort(q[j].id, q[j + 1].id)) {
                struct Stu temp = q[j];
                q[j] = q[j + 1];
                q[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s %s %s %s\n", q[i].name, q[i].id, q[i].profe, q[i].dorm);
    }
}

int sort(char a[], char b[]) {
    for (int i = 0; i < 8; i++) { // ѧ�ų���Ϊ8
        if (a[i] > b[i])
            return 1;
        if (a[i] < b[i])
            return 0;
    }
    return 0; // �����ȫ��ͬ������0
}

void printfile(struct Stu q[], int n) {
    FILE* fp = fopen("student.dat", "w");
    if (fp == NULL) {
        printf("�޷����ļ�\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %s %s %s\n", q[i].name, q[i].id, q[i].profe, q[i].dorm);
    }
    fclose(fp);
}

void scanfile(struct Stu q[], int n) {
    FILE* fp = fopen("student.dat", "r");
    if (fp == NULL) {
        printf("�޷����ļ�\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%s %s %s %s", q[i].name, q[i].id, q[i].profe, q[i].dorm);
        printf("%s %s %s %s\n", q[i].name, q[i].id, q[i].profe, q[i].dorm);
    }
    fclose(fp);
}