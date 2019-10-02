#include <stdio.h>
#include <math.h>

int main()
{   
    double x1,y1,x2,y2;
    double result = 0.0;

    printf("Put the first coordinate: (x1, y1) ");
    scanf("%lf%lf", &x1,&y1);

    printf("Put the second coordinate: (x2, y2) ");
    scanf("%lf%lf", &x2,&y2);

    result = sqrt( (pow((x2-x1),2)) + (pow((y2-y1),2)) );

    printf("Result: %lf",result);

    return 0;
}