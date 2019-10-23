#include <stdio.h>
int main()
{
    char str[] = "GAME";
    char *p;

    p = str;
    while(*p) {
        printf("%c", *p);
        p++;
    }
    printf("\n");

    p = str;
    while(*p){
        *p += 32;
        printf("%c", *p);
        p++;
    }
    printf("\n");

    return 0;
}