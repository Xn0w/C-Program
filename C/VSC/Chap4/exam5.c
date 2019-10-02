#include <stdio.h>
int main()
{
    char c = 'A';
    int i = 10;
    float f=3.2f;

    printf("(int)(c + i + f) = %d\n", (int)(c+i+f));
    printf("(int)f * i - 2= %d\n", (int)f*i-2);
    printf("(float)(int)f - (int)c - i = %.1f\n", (float)(int)f-(int)c-i);
    printf("(long double)c - f * 10.0 = %.1Lf\n", (long double)c*f*10.0);

    return 0;
}