#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char c;
    int random;

    while(1){
        printf("Random Number: \n");
        scanf("%c", &c);
        if(c=='q') break;
        srand(time(NULL));
        random = rand()%100+1;
        printf("Number: %d\n", random);
    }

    return 0;
}