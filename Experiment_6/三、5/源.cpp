#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
struct Stu
{
	int num;
	char name[50];
	int year;
	int month;
	int day;
};
int main(void)
{   //初始化
	Stu student[] = { {1020,"张丽",1995,12,21},{1022,"李林",1996,10,1},{ 1026, "王一",1998,5,16 } };
	FILE* filepoint = fopen("D:/南大 NCU/课程相关/编程课/编程实验课/C++实验指导书-2020版/实验6_结构体与共用体和文件/students.txt","w");
	if (filepoint == NULL)
	{   //打开文件失败
		perror("打开文件失败!");
		return 1;
	}
	//写入数据
	for (int i = 0; i < 3; i++)
		fprintf(filepoint, "%d  %s  %d-%2d-%2d\n", student[i].num, student[i].name, student[i].year, student[i].month, student[i].day);
	fclose(filepoint);
	printf("数据写入成功!");
	return 0;
}