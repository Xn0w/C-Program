#include <stdio.h>
int main()
{
    int data;
    int sum = 0;

    do{
        printf("Insert num: ");
        scanf("%d", &data);
        sum+=data;
    } while(data != 0);
    
    printf("Sum : %d\n", sum);
    return 0;
}