#include <stdio.h>
int main (void)
{
    int x;
    int y;
    int sum = 0;
    int sub = 0;
    int mul = 0;
    int div = 0;

    printf("inser First number: ");
    scanf("%d", &x);

    printf("inser Second number: ");
    scanf("%d", &y);


    printf("%d + %d = %d\n", x,y,x+y);
    printf("%d - %d = %d\n", x,y,x-y);
    printf("%d * %d = %d\n", x,y,x*y);
    printf("%d / %d = %d\n", x,y,x/y);

    return 0;
}