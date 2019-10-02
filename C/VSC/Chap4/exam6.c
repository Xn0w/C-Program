#include <stdio.h>
int main(void)
{
    int x,y,z;

    printf("Insert three numbers:");
    scanf("%d%d%d", &x,&y,&z);

    printf("The largest Number is : %d\n", (x=x>y?x:y)>z?x:z);

    return 0;

    
}