#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//冒泡排序
int BubbleSort(int a[], int n)
{
    int i, j;
    int flag, temp;
    for (i = n - 1; i >= 1; i--)
    {
        flag = 0;
        for (j = 1; j <= i; j++)
        {
            if (a[j - 1] > a[j])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            return 0;
        }
    }
    return 0;
}

int main()
{
    int a[11];
    a[0] = 0;
    srand((int)time(NULL)); //每次执行种子不同，生成不同的随机数
    for (int i = 0; i < 11; i++)
    {
        a[i] = rand() % 50;
        printf("%d ", a[i]);
    }

    BubbleSort(a, 11);
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        //a[i+1] = rand() % 50;
        printf("%d ", a[i]);
    }

    return 0;
}