#include <stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    int result = 0;
    int Sum(int [], int);

    result = Sum(a,5);

    printf("Sum = %d\n", result);

    return 0;
}

int Sum(int a[], int b)
{
    int i, rst = 0;
    for(i=0;i<b;i++)
        rst += a[i];
        return rst;
}