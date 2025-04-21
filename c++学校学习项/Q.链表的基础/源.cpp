#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int num, score;
	struct Node *next;
};

struct Node *creat(struct Node *head, int n);
void print(struct Node *head);

void main()
{
	struct Node *head = NULL;
	head = creat(head, 5);
	print(head);
	free(head);
}

struct Node *creat(struct Node *head, int n)
{
	struct Node *p = NULL, *q;
	int i;
	for (i = 1; i < n; i++)
	{
		q = (struct Node *)malloc(sizeof(struct Node));
		printf("Input%d num,score:\n", i);
		scanf("%d %d", &q->num, &q->score);
		q->next = NULL;
		if (head == NULL)
			head = q;
		else
			p->next = q;
		p = q;
	}
	return head;
}

void print(struct Node* head)
{
	struct Node *p = head;
	printf("num\tscore\n");
	while (p != NULL)
	{
		printf("%d\t%d\n", p->num, p->score);
		p = p->next;
	}
}
