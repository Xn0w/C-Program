#include <stdio.h>
int main()
{
    char c[5], *p, *q;
    int a[5], *m, *n;

    p=c;
    q = p+2;
    printf("q-p = %d\n", q-p);
    printf("(int)q-(int)p =%d\n", (int)q-(int)p); // 2 * 문자형 범위 1byte = 2

    m = a;
    n = m+2;
    printf("n-m = %d\n", n-m);
    printf("(int)q-(int)p =%d\n", (int)n-(int)m); // 2 * 정수형 범위 4byte = 8

    return 0;
}