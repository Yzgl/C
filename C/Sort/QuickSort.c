#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//快速排序
int QuickSort(int a[], int low, int high)
{
    int i = low;
    int j = high;
    int temp;
    if (low < high)
    {
        temp = a[low];
        while (i < j)
        {
            while (j > i && a[j] >= temp)
                --j;

            if (i < j)
            {
                a[i] = a[j];
                ++i;
            }
            while (i < j && a[i] < temp)
                ++i;

            if (i < j)
            {
                a[j] = a[i];
                --j;
            }
            a[i] = temp;
            QuickSort(a, low, i - 1);
            QuickSort(a, i + 1, high);
        }
    }
    return 0;
}

int main()
{
    int a[10];
    a[0] = 0;
    srand((int)time(NULL)); //每次执行种子不同，生成不同的随机数
    for (int i = 0; i < 11; i++)
    {
        a[i+1] = rand() % 50;
        printf("%d ", a[i]);
    }
    QuickSort(a,1,10);
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        //a[i+1] = rand() % 50;
        printf("%d ", a[i]);
    }

    return 0;
}