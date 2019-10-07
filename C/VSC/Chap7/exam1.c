#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num;
    int random;

    srand(time(NULL));
    random = rand()%100+1;

    while(1){
        printf("GUESS?: ");
        scanf("%d", &num);

        if(num == random){
            printf("SUCCESS!: \n");
            break;
        }
        if (num > random)
            printf("Random is smaller\n");
        else
            printf("Random is bigger\n");
    }
    return 0;
}