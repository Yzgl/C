#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SelectSort()
{
    
}
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