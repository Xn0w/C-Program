#include <stdio.h>
int main ()
{
    char c;
    c = 'A';
    while (c<='Z')
        putchar(c++);
    putchar('\n');
    
    c = 'a';
    while (c<='z')
        putchar(c++);
    putchar('\n');

    c = '0';
    while (c<='9')
        putchar(c++);
    putchar('\n');

    return 0;
}