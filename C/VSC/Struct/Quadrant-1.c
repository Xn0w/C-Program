#include <stdio.h>
typedef struct{
    int x;
    int y;
}Point;
int main()
{
    Point p, *pp;
    int a;
    int Coordinate(Point *);

    printf("Insert x,y: ");
    scanf("%d%d", &p.x, &p.y);

    pp = &p;

    a = Coordinate(pp);

    printf("%d»çºÐ¸é", a);

    return 0;
}

int Coordinate(Point *pp)
{
    if (pp->x > 0 && pp->y > 0) return 1;
    if (pp->x < 0 && pp->y > 0) return 2;
    if (pp->x < 0 && pp->y < 0) return 3;
    if (pp->x > 0 && pp->y < 0) return 4;
}