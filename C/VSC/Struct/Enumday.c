#include <stdio.h>
int main()
{
    int i,n;
    enum Days{Mon,Tue,Wed,Thu,Fri,Sat,Sun};
    enum Days d;
    char *Days_name[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

    d = Mon;
    printf("Now day : %s\n", Days_name[d]);

    printf("Insert n-th day[0~6]: ");
    scanf("%d",&n);

    printf("%d-th : %s\n", n, Days_name[n]);

    return 0;
}