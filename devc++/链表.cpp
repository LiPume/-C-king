#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct Node
{
	ElemType data;
	struct Node* next;
}Node,*Linklist;
void Init(Linklist* L)//需要进行地址传递来改变指针的值
{
	*L = (Linklist)malloc(sizeof(Node));//取值
	(*L)->next = NULL;
	  
}
void printlist(Linklist L)
{
	Node* p = L->next;
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
}
int Insert(Linklist L, int i, ElemType e)
{
	//找到i-1个节点
	Node* p = L;
	int count = 0;
	while (p->next != NULL && count < i - 1)
	{
		count++;
		p = p->next;
	}
	if (p = NULL)return 0;
	//创建一个新节点
	Node* s = (Node*)malloc(sizeof(Node));
	s->data = 0;
	s->next = NULL;

	s->next = p->next;
	p->next = s;

}

int main()
{
	Linklist L;
	Init(&L);

	for (int i = 0; i < 10; i++)
	{
		Insert(L, i + 1, i);
	}
	printlist(L);
	return 0;
}
