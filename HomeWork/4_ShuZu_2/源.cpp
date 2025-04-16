#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
#define course 5
#define person 10
int main(void)
{
    int score[person][course] = { 0 };// 二维数组存储所有学生的成绩
    int good_id[person] = { 0 }; int good_score[person] = { 0 };   //优秀学生学号、成绩
    int poor_id[person] = { 0 }; int poor_score[person] = { 0 };   //补考学生学号、成绩
    int sum_score[person] = { 0 };    //成绩暂存
    int good = 0, poor = 0;    //按顺序记录优秀或补考学生的个数
    for (int i = 0; i < person; i++)
    {    //输入学生成绩
        printf("请输入学生%d的成绩: ", i + 1);
        for (int l = 0; l < course; l++)
        {
            scanf("%d", &score[i][l]);
            sum_score[i] += score[i][l]; // 累加每个学生的总分
        }
        int temp1 = 0, temp2 = 1, temp3 = 1;
        for (int l = 0; l < course; l++)
        {     //区分学生是否优秀或需要补考并记录
            if (score[i][l] >= 85) temp1++;
            if (score[i][l] < 70) temp2 = 0;
            if (score[i][l] < 60) temp3 = 0;
        }
        if (temp1 >= 3 && temp2 == 1)
        {     //优秀学生学号及分数记录
            good_id[good] = 2354 * 1000 + i + 1;
            good_score[good++] = sum_score[i];
        }
        if (temp3 == 0)
        {    //补考学生学号及分数记录
            poor_id[poor] = 2354 * 1000 + i + 1;
            poor_score[poor++] = sum_score[i];
        }
    }
    printf("\n成绩优秀的人数:%d\n名单:\n", good);
    for (int l = 0; l < good; l++)
    {  //输出优秀学生
        printf("学号:0%d, 成绩:%d\n", good_id[l], good_score[l]);
    }
    printf("\n");   //控制格式
    printf("需要补考的人数:%d\n名单:\n", poor);
    for (int l = 0; l < poor; l++)
    {  //输出补考学生
        printf("学号:0%d, 成绩:%d\n", poor_id[l], poor_score[l]);
    }
    return 0;
}