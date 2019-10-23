#include <stdio.h>
int main()
{
    int a,b,c;
    int *p;

    a = 100;
    b = 200;

    p = &c;
    *p = a+b;

    printf("Value C : %d\n", c);
    return 0;
}