#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//直接插入排序：哨兵（从小到大）
int InsertSort(int a[], int n)
{
    int i, j;
    for (i = 2; i <= n; i++)
    {
        if (a[i] < a[i - 1])
        {
            a[0] = a[i];
            for (j = i - 1; a[0] < a[j]; --j)
            {
                a[j + 1] = a[j];
            }
            a[j + 1] = a[0];
        }
    }
    return 0;
}

//直接插入排序：无哨兵（从小到大）
int InsertSort2(int a[], int n)
{
    int i, j;
    int t;

    for (i = 2; i <= n; i++)
    {
        t = a[i];
        j = i - 1;
        while (j >= 1 && a[j] > t)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = t;
    }
    return 0;
}

//折半插入排序

int main()
{
    int a[11];
    a[0] = 0;
    srand((int)time(NULL)); //每次执行种子不同，生成不同的随机数
    for (int i = 0; i < 11; i++)
    {
        a[i + 1] = rand() % 50;
        printf("%d ", a[i]);
    }

    InsertSort2(a, 10);
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        //a[i+1] = rand() % 50;
        printf("%d ", a[i]);
    }

    return 0;

}