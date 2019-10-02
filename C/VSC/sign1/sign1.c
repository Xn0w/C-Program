#include <stdio.h>
void main()
{
    int i = 2147483640, j = 7;
    int sum;

    sum = i+j;
    printf("sum = %d\n", sum);
    sum = sum + 3;
    printf("sum = %d\n", sum);
}