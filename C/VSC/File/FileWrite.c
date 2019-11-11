#include <stdio.h>
#define Loop while(1)
int main()
{
    FILE *fp;
    char c = 'a';
    void AZ();

    fp = fopen("sample.txt","w");
    
    Loop{
        if(c > 'z') break;
        putc(c, fp);
        c++;
    }
    putc('\n',fp);

    AZ(fp);

    fclose(fp);

    return 0;
}

void AZ(FILE *fp){
    char c;
    for(c = 'A'; c<='Z'; c++){
        putc(c, fp);
    }
}