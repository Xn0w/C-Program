#include <stdio.h>
struct Card {
    int pips;
    char suits;
};

int main()
{

    struct Card c1, *pc;
    struct Card Update(struct Card *);

    c1.pips = 5;
    c1.suits = 's';

    pc = &c1;

    Update(pc);
    printf("Suits : %c, Pips : %d\n", c1.suits,c1.pips);

    return 0;
}

struct Card Update(struct Card *c)
{
    c->pips = 7;
    c->suits = 'd';
}