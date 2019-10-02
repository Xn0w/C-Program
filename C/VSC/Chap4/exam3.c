#include <stdio.h>

int main(void)
{
    int x,y;
    printf("Insert two numbers: ");
    scanf("%d %d", &x,&y);

    printf(" %d == %d result: %d\n", x,y,x==y);
    printf(" %d != %d result: %d\n", x,y,x!=y);
    printf(" %d > %d result: %d\n", x,y,x>y);
    printf(" %d < %d result: %d\n", x,y,x<y);
    printf(" %d >= %d result: %d\n", x,y,x>=y);
    printf(" %d <= %d result: %d\n", x,y,x<=y);

    return 0;
}