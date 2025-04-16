#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#define N 3 //实验时，N = 5）
struct Stu {
    char name[10];
    char id[9];
    char profe[10];
    char dorm[10];
};
//声明函数
void putin(struct Stu q[], int n); //读取信息
void printlist(struct Stu q[], int n); //按学号排序
int sort(char a[], char b[]); //判断学号大小
void printfile(struct Stu q[], int n); //输出至文件
void scanfile(struct Stu q[], int n); //
//主函数
int main() 
{
    struct Stu student[N] = { 0 };
    putin(student, N);
    printlist(student, N);
    printfile(student, N); // 输出到文件
    scanfile(student, N);  // 读取文件内容
    return 0;
}

// 定义函数
void putin(struct Stu q[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        printf("请输入第%d个学生的信息(姓名,学号,专业,宿舍):", i + 1);
        scanf("%s %s %s %s", q[i].name, q[i].id, q[i].profe, q[i].dorm);
    }
}
//void putin(struct Stu q[], int n)
//{ //维护N（实验时，N = 5）个学生的个人信息；
//  //1 采用结构体数组的形式输入数据；
//    for (int i = 0; i < N; i++)
//    {
//        printf("请输入第%d个学生的信息(姓名,学号,专业,宿舍):", i + 1);
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
    for (int i = 0; i < 8; i++) { // 学号长度为8
        if (a[i] > b[i])
            return 1;
        if (a[i] < b[i])
            return 0;
    }
    return 0; // 如果完全相同，返回0
}

void printfile(struct Stu q[], int n) {
    FILE* fp = fopen("student.dat", "w");
    if (fp == NULL) {
        printf("无法打开文件\n");
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
        printf("无法打开文件\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%s %s %s %s", q[i].name, q[i].id, q[i].profe, q[i].dorm);
        printf("%s %s %s %s\n", q[i].name, q[i].id, q[i].profe, q[i].dorm);
    }
    fclose(fp);
}