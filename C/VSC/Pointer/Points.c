#include <stdio.h>
int main()
{
    char str[100];
    char *p;
    int count = 0;

    printf("Insert String : ");
    scanf("%s", str);

    p =str;
    while(*p){
        p++;
        count++;
    }

    printf("String Count : %d", count);

    return 0;
}