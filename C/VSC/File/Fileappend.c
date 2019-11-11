#include <stdio.h>
#define Loop while(1)
int main()
{
    FILE *fp;
    char c = 'A';

    fp = fopen("sample.txt","a");
    
    putc('\n',fp);

    Loop{
        if(c > 'Z') break;
        putc(c, fp);
        c++;
    }
    fclose(fp);

    return 0;
}