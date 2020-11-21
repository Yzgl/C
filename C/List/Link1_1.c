#include "stdio.h"
#include "stdlib.h"
/*****
 * 
 * 线性表的顺序存储
 * 
 * 动态分配
 * 
******/
#define OK 1
#define OVERFOLW 0

#define InitSize 50
typedef int ElemType;

typedef struct list
{
    ElemType *data;
    int length,MaxSize;
}Sqlist;

Sqlist InitSqlist(Sqlist L)
{
    L.data=(ElemType *)malloc(sizeof(ElemType)*InitSize);
    L.length=0;
    L.MaxSize=InitSize;
    for (int i = 0; i < InitSize; i++)
    {
        L.data[i]=i;
        L.length++;
    }
    return L;
}

int main()
{
    Sqlist l=InitSqlist(l);
    for (int i = 0; i < InitSize; i++)
    {
        printf("%d ",l.data[i]);
        
    }
    return 0;
}