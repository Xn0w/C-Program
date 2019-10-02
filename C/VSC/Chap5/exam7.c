#include <stdio.h>
int main ()
{
    char ch;

    printf("Insert char: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')
        printf("Lower Case \n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("Upper Case \n");
    else if(ch >= '0' && ch <='9')
        printf("Digit \n");
    else
        printf("Other Character\n");
    

        return 0;
}