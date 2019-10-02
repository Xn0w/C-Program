#include <stdio.h>
#define PI 3.14
int main(void)
{
    float radius;
    float Area=0.0, Length= 0.0;

    printf("Insert Radius: ");
    scanf("%f", &radius);

    Area = PI * radius * radius;
    Length = 2 * PI * radius;

    printf("Area: %f\n", Area);
    printf("Length: %f\n", Length);

    return 0;
}