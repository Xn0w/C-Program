#include <stdio.h>
int main()
{
    char c;
    printf("insert char: ");
    while((c=getchar()) != '\n'){
        if(c>='a' && c<='z')
            putchar(c-32);
        else
            putchar(c);
    }
    return 0;
}