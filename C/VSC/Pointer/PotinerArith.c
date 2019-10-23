#include <stdio.h>
int main()
{
    int a[5] = {0,1,2,3,4};
    int *pi;

    pi = a;
    printf("a[0] address = %x\n", &a[0]);
    printf("pi address = %x\n", pi);
    printf("++pi address = %x   ++*pi = %d\n", ++pi, ++*pi);
    printf("pi+1 address = %x   *(pi+1) = %d\n", pi+1, *(pi+1));

    return 0;
}