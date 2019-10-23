#include <stdio.h>
int main()
{
    int x;
    int *px;

    x=12;
    px = &x;

    printf("px = %x\n",px);
    printf("*px = %d\n", *px);

    return 0;
}