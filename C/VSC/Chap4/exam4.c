#include <stdio.h>
int main()
{
    int i=7, j=8, k=0;
    k = i&j;
    printf("Bitwise AND Result k=%x\n",k);
    k = i|j;
    printf("Bitwise OR Result k=%x\n",k);
    k = i<<1;
    printf("Bitwise move Result to left k=%x\n",k);
    k = j>>1;
    printf("Bitwise move Result to left k=%x\n",k);

    return 0;
}