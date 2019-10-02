#include <stdio.h>
int main(void)
{
    int x;
    int y;
    int sum = 0;

    printf("insert First number: ");
    scanf("%d", &x);

    printf("insert Second number: ");
    scanf("%d", &y);
    
    sum = x+y;

    printf("Sum: %d\n", sum);
    
    return 0;
}