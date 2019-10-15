#include <stdio.h>
void main()
{
    int a = 1, b = 2, c =3;
    {
        int b = 4;
        int c = 5;
        printf("a=%d, b=%d, c=%d\n",a ,b ,c);
        a=b;
        {
            int c;
            c=b;
            printf("a=%d, b=%d, c=%d\n",a ,b ,c);
        }
        printf("a=%d, b=%d, c=%d\n",a ,b ,c);
    }
    printf("a=%d, b=%d, c=%d\n",a ,b ,c);
}