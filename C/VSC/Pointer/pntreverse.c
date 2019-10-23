#include <stdio.h>
int main()
{
    char str[100];
    char new[100];
    int i, j =0;
    int length = 0;
    int my_strlen(char []);
    void Reverse(char [], int);

    printf("Insert String: ");
    scanf("%s", str);

    length = my_strlen(str);

    printf("String : %s, Length : %d\n", str, length);

    Reverse(str, length);

    return 0;
}

int my_strlen(char str[])
{
    int count = 0;
    char *p;
    p = str;
    while(*p){
        p++;
        count++;
    }
    return count;
}

void Reverse(char str[], int length)
{
    char new[100];
    int i, j=0;
    j = length -1;
    for(i=0; i<length; i++){
        new[j] = str[i];
        j--;
    }
    new[length] = '\0';

    printf("String: %s", new);

}