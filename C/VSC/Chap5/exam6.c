#include <stdio.h>
void main()
{
    int i;
    printf("Input a number (1~3): ");
    scanf("%d", &i);
    switch(i) {
        case 1 : printf("ONE\n");    break;
        case 2 : printf("TWO\n");    break;
        case 3 : printf("THREE\n");  break;
        default : printf("ERROR\n");
    }
}