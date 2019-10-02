#include <stdio.h>
int main()
{
    char c;
    printf("Inser Char : ['Q': exit]");
    scanf("%c", &c);
    while(c!='Q') {
        printf("%c", c);
        scanf("%c", &c);
    }
    printf("\n");
    return 0;
}