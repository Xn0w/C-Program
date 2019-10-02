#include <stdio.h>
int main()
{
    int i=10, j=10;

    printf("    i=%d    j=%d\n", i,j);
    printf("  ++i=%d  j++=%d\n", ++i,j++);
    printf("    i=%d    j=%d\n", i,j);

    return 0;
}