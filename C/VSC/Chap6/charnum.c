#include <stdio.h>
int main()
{
    char c;
    int i=0;

    printf("insert char : [exit : enter]");
    while( (c=getchar()) != '\n')
        i++;
    printf("number of char : %d", i);
}