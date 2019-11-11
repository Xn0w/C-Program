#include <stdio.h>
struct Card {
    int pips;
    char suits;
};

int main()
{

    struct Card c1,c2;
    struct Card Update(struct Card);

    c1.pips = 5;
    c1.suits = 's';

    c2 = Update(c1);
    printf("Suits : %c, Pips : %d\n", c2.suits,c2.pips);

    return 0;
}

struct Card Update(struct Card c)
{
    c.pips = 7;
    c.suits = 'd';

    return c;
}