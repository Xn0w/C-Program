#include <stdio.h>
int main ()
{
    int i=1;
    int sum = 0;

    while(i<=10){
        sum += i++;
    }

    printf("Sum: %d\n", sum);
    return 0;
}