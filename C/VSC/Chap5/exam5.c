#include <stdio.h>
int main(void)
{
    int i;
    int digit = 1;
    printf("Insert i: ");
    scanf("%d", &i);


    if(i>=0 && i<10)
        digit = 1;
    else if(i>=10 && i<100)
        digit = 2;
    else if(i>=100 && i<1000)
        digit = 3;
    else if(i>=1000 && i<10000)
        digit = 4;
    else
        digit = 5;

    if(digit != 5)
        printf("%d digit \n", digit);
    else
        printf("more than 4 digit\n");
    
    return 0;
}
