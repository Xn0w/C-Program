#include <stdio.h>
int main()
{
    int i, sum = 0;
    int a[10] = {9,3,2,6,5,8,1,4,0,7};
    char name[] = "Program";

    printf("a�� 3��° ��� (a[2]) : %d\n", a[2]);
    printf("a�� 7��° ��� (a[6]) : %d\n", a[6]);
    printf("name�� 2��° ��� (nama[1]) : %c\n", name[1]);
    printf("name�� 7��° ��� (nama[6]) : %c\n", name[6]);

    for(i=0; i<10; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}