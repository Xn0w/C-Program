#include <stdio.h>
int main(void)
{
    int i;
    int result = 0;

    printf("숫자를 입력하시오: ");
    scanf("%d", &i);

    (i %2 == 0) ? printf("even\n") : printf("odd\n");
    
    printf("숫자는 %d입니다.\n", i);

    return 0;
}