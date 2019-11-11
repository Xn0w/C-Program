#include <stdio.h>
#define SIZE 3
int main()
{
    struct Card{
        int pips;
        int suits;
    };
    struct Card Scard[3];
    struct Card c2;

    int i;

    Scard[0].pips = 3;  Scard[0].suits = 'd';
    Scard[1].pips = 8;  Scard[1].suits = 's';
    Scard[2].pips = 11;  Scard[2].suits = 'h';

    c2 = Scard[2];

    for (i=0; i<SIZE; i++){
        printf("Card %c, Pips : %d \n", Scard[i].suits,Scard[i].pips);
    }

    if(c2.pips == Scard[2].pips && c2.suits == Scard[2].suits){
        printf("EQUAL\n");
    }

    return 0;
}