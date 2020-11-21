#include "stdio.h"
#include "stdlib.h"

/*****
 * 
 * 线性表的链式存储
 * 
 * 
******/
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode,*LinkList;

int InitLinkList(LinkList L)
{
    L=(LinkList)malloc(sizeof(LinkList));
    L->next=NULL;
    
}
int CreateLinkList(LinkList L)
{
    InitLinkList(L);
    
}
int main()
{
    LinkList L=(LinkList)malloc(sizeof(LinkList));
    L->data=99;
    printf("%d",L->data);
    InitLinkList(L);
    printf("%d",L->data);
    return 0;
}