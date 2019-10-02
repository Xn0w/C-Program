#include <stdio.h>
#define PI 3.14
int main(void)
{
    double radius;
    double Area= 0.0, Length = 0.0;

    printf("Insert radius: ");
    scanf("%lf", &radius);

    Area = PI * radius * radius;
    Length = 2 * PI * radius;

    printf("Area: %lf\n", Area);
    printf("Length: %lf\n", Length);

    return 0;
}