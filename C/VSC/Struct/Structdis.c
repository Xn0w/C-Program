#include <stdio.h>
#include <math.h>
struct Point {
    int x;
    int y;
}p1,p2;

int main()
{
    int xdiff, ydiff;
    double distance;

    p1.x = 2; p1.y = 1;
    p2.x = 6; p2.y = 5;

    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

    distance = sqrt(pow(xdiff,2)+pow(ydiff,2));

    printf("Distance: %lf\n",distance);

    return 0;
}