#include <stdio.h>
int main()
{
    char c;
    printf("Inser Char : ['Q': exit]");

    c=getchar();

    while(c!='Q') {
        putchar(c);
        c = getchar();
    }
    return 0;
}