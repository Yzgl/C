#include "stdio.h"
#include "stdlib.h"

/*****
 * 
 * 线性表的顺序存储
 * 
 * 静态分配
 * 
******/
#define MaxSize 50
typedef int ElemType;

typedef struct 
{
    ElemType data[MaxSize];
    int length;
    
}SqList;

int main()
{
    SqList n;
    n.length=0;
    printf("线性表");
    for(int i=0;i<MaxSize;i++)
    {
        n.data[i]=i;
    }
    for (int i = 0; i < MaxSize; i++)
    {
        printf("%d ",n.data[i]);       
    }
    printf("%d",n.length);
    
}

