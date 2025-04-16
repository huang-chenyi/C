#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
//声明函数
void newcopy(char *new, char *old);
//主函数
int main()
{  //初始化字符串
	char old_ch[13] = "I love China";
	char new_ch[11] = "\0";
	char* old = old_ch;
	char* new = new_ch;
	printf("原字符串为:%s\n", old);
	newcopy(new, old);//调用函数
	printf("新字符串为:%s\n", new);//输出结果
	return 0;
}
//定义函数
void newcopy(char* new, char* old)
{
	for (int i = 0; i < 12; i++, old++)
	{ //只复制除小写字母外的其他字符
		if (*old < 'a' || *old > 'z')
		{   //复制
			*new = *old;
			new++;
		}
	}
	*new = '\0';
}
