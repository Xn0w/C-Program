#include <stdio.h>
int main()
{
    char str[100];
    int length = 0;
    int my_strlen(char[]);

    printf("Insert String : ");
    scanf("%s", str);

    length = my_strlen(str);

    printf("String Count : %d", length);

    return 0;
}

int my_strlen(char str[]){
    char *p;
    int count =0;
    p =str;
    while(*p){
        p++;
        count++;
    }
    return count;
}