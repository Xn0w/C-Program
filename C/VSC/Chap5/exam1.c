#include <stdio.h>
int main(void)
{
    int i;

    printf("숫자를 입력하시오: ");
    scanf("%d", &i);

    if(i>0){
        if(i %2 == 0)
        printf("%d: 짝수\n", i);

        if(i %2 == 1)
        printf("%d: 홀수\n", i);
    }
    if(i<0)
    printf("i 값은 음수\n");

    return 0;
}