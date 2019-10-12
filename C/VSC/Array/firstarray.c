#include <stdio.h>
int main()
{
    int i, sum = 0;
    int a[10] = {9,3,2,6,5,8,1,4,0,7};
    char name[] = "Program";

    printf("a의 3번째 요소 (a[2]) : %d\n", a[2]);
    printf("a의 7번째 요소 (a[6]) : %d\n", a[6]);
    printf("name의 2번째 요소 (nama[1]) : %c\n", name[1]);
    printf("name의 7번째 요소 (nama[6]) : %c\n", name[6]);

    for(i=0; i<10; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}