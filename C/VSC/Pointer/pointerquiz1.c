#include <stdio.h>
int main()
{
    int i = 10;
    int *ip;
    
    ip =&i;
    *ip = 100;

    printf("Value i     : %d\n", i);
    printf("Value *ip   : %d\n", ++*ip);
    printf("Value i     : %d\n", i);

    return 0;
}