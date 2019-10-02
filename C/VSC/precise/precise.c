#include <stdio.h>

int main(void)
{
    float fvalue = 123456789.12345678901234567890;
    double dvalue = 123456789.12345678901234567890;
    long double lvalue = 123456789.12345678901234567890;

    printf("Float : %f\n", fvalue);
    printf("Double : %lf\n", dvalue);
    printf("Long Double : %Lf\n", lvalue);

    return 0;
}