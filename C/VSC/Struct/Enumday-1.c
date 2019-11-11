#include <stdio.h>
#include <string.h>
enum Days{Mon,Tue,Wed,Thu,Fri,Sat,Sun};

int main()
{
    int n;
    enum Days d;
    char *Days_name[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    char input[100];
    d = Mon;
    int Search(char *);

    printf("Insert Days: ");
    scanf("%s", input);

    n = Search(input);

    printf("Now day : %s\n", Days_name[n]);

    return 0;
}

int Search(char *input)
{
    if(!(strcmp("Mon", input))) return 0;
    if(!(strcmp("Tue", input))) return 1;
    if(!(strcmp("Wed", input))) return 2;
    if(!(strcmp("Thu", input))) return 3;
    if(!(strcmp("Fri", input))) return 4;
    if(!(strcmp("Sat", input))) return 5;
    if(!(strcmp("Sun", input))) return 6;
}