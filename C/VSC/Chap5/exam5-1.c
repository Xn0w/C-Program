#include <stdio.h>
int main(void)
{
    int i;
    int digit = 1;
    printf("Insert i: ");
    scanf("%d", &i);

    digit=(i>=0 && i <10)?1:((i>10 && i < 100)?2:((i>100 && i < 1000)?3:((i>=1000 && i< 10000)?4:5)));
    
    if(digit != 5)
        printf("%d digit \n", digit);
    else
        printf("more than 4 digit\n");
    
    return 0;
}

    