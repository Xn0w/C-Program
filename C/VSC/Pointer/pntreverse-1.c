#include <stdio.h>
#include <string.h>
int main()
{
    char str[100]="GAME";
    char *p;
    int length=0;

    p = str;
    while(*p) {
        printf("%c", *p);
        p++;
    }
    printf("\n");

    length = strlen(str);

    p = &str[length-1];
    while(*p){
        printf("%c", *p);
        p--;
    }
    printf("\n");

    return 0;
}