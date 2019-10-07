#include <stdio.h>
#include <string.h>
int main()
{
    int length1, length2;
    
    char str1[] = "Korea";
    char *str2 = "¥Î«—πŒ±π";
    
    length1 = strlen(str1);
    length2 = strlen(str2);

    printf("length of %s is %d\n", str1, length1);
    printf("length of %s is %d\n", str2, length2);

    return 0;
}