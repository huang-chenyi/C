#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
//��������
void newcopy(char *new, char *old);
//������
int main()
{  //��ʼ���ַ���
	char old_ch[13] = "I love China";
	char new_ch[11] = "\0";
	char* old = old_ch;
	char* new = new_ch;
	printf("ԭ�ַ���Ϊ:%s\n", old);
	newcopy(new, old);//���ú���
	printf("���ַ���Ϊ:%s\n", new);//������
	return 0;
}
//���庯��
void newcopy(char* new, char* old)
{
	for (int i = 0; i < 12; i++, old++)
	{ //ֻ���Ƴ�Сд��ĸ��������ַ�
		if (*old < 'a' || *old > 'z')
		{   //����
			*new = *old;
			new++;
		}
	}
	*new = '\0';
}
