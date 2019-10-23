#include <stdio.h>
int main()
{
    char str[3][10] = {"Enter","Tain","Ment"};
    char *pstr[3];
    int i;

    pstr[0] = &str[0][0];
    pstr[1] = &str[1][0];
    pstr[2] = &str[2][0];

    for(i=0; i<3; i++){
        printf("%s", pstr[i]);
    }
    
    printf("\n");

    return 0;
}