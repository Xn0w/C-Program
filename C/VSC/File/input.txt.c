#include <stdio.h>
int main()
{
    FILE *fp;
    char c;

    fp = fopen("input.txt","w");
    while(1){
        c = getc(stdin);
        if(c == '!') break;
        fputc(c,stdout);
        fputc(c, fp);
    }

    fclose(fp);

    return 0;
}