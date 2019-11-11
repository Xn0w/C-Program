#include <stdio.h>
typedef struct{
    int x;
    int y;
}Point;
int main()
{
    Point p;
    int a;
    int Coordinate(Point);

    printf("Insert x,y: ");
    scanf("%d%d", &p.x, &p.y);

    a = Coordinate(p);

    printf("%d»çºĞ¸é", a);

    return 0;
}

int Coordinate(Point p)
{
    if (p.x > 0 && p.y > 0) return 1;
    if (p.x < 0 && p.y > 0) return 2;
    if (p.x < 0 && p.y < 0) return 3;
    if (p.x > 0 && p.y < 0) return 4;
}