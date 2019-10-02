#include <stdio.h>
#include <math.h>
int main()
{
    double a,b;
    double result=0;

    printf("Insert two Numbers: ");
    scanf("%lf %lf",&a,&b);

    result = a>b?pow(a,b):pow(b,a);

    printf("Answer: %lf", result);

    return 0;
}