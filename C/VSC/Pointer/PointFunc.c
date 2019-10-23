#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int length=0;
    
    printf("Insert String : ");
    scanf("%s", str);

    length = strlen(str);

    printf("length of String %s is %d", str, length);

    return 0;
}