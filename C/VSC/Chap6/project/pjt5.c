#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num;
    int random;

    srand(time(NULL));
    random = rand()%100+1;

    for(;;){
        printf("Try to guess: ");
        scanf("%d", &num);

        if (num == random) {
            printf("Correct!\n");
            break;
        }
        if (num > random) 
            printf("random is smaller\n");
        else
            printf("random is bigger\n");        
    }
    return 0;
}